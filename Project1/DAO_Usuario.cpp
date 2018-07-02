#include "Usuário.h"
#include "DAO_Usuario.h"
#include <string>
using std::string;
using sql::ResultSet;

DAO_Usuario* DAO_Usuario::instance = 0;

DAO_Usuario::~DAO_Usuario()
{
}

DAO_Usuario* DAO_Usuario::getInstance()
{
	if (instance == 0)
		instance = new DAO_Usuario();
	return instance;
}

ResultSet* DAO_Usuario::selecionarUsuario(string login, string senha) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	
	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("SELECT ID_USER, LOGIN, SENHA FROM Usuario WHERE LOGIN = ? AND SENHA = ? ORDER BY ID_USER ASC");
	
	preparedStatement->setString(1, login.c_str());
	preparedStatement->setString(2, senha.c_str());

	resultSet = preparedStatement->executeQuery();

	return resultSet;
}