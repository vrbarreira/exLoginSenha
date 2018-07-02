#include "Funcionário.h"
#include "DAO_Funcionario.h"
#include "MySQLDAO.h"
#include <string>
using std::string;
using sql::ResultSet;

DAO_Funcionario* DAO_Funcionario::instance = 0;

DAO_Funcionario::~DAO_Funcionario()
{
}

DAO_Funcionario* DAO_Funcionario::getInstance()
{
	if (instance == 0)
		instance = new DAO_Funcionario();
	return instance;
}

ResultSet* DAO_Funcionario::selecionarFuncionario() {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	statement = connection->createStatement();
	resultSet = statement->executeQuery("SELECT ID_FUNC, NOME, CPF, SALARIO, TIPO_FUNC, ID_EQUIPE FROM Funcionario ORDER BY ID_FUNC ASC");

	return resultSet;
}

ResultSet* DAO_Funcionario::selecionarFuncionarioEquipe(string equipe) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("SELECT ID_FUNC, NOME, CPF, SALARIO, TIPO_FUNC, ID_EQUIPE FROM Funcionario WHERE ID_EQUIPE = ? ORDER BY ID_FUNC ASC");
	preparedStatement->setString(1, equipe.c_str());

	resultSet = preparedStatement->executeQuery();

	return resultSet;
}

void DAO_Funcionario::insereFuncionario(string nome, string cpf, string salario, string tipoFunc) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("insert into Funcionario (NOME, CPF, SALARIO, TIPO_FUNC) values (?,?,?,?)");

	preparedStatement->setString(1, nome.c_str());
	preparedStatement->setString(2, cpf.c_str());
	preparedStatement->setString(3, salario.c_str());
	preparedStatement->setString(4, tipoFunc.c_str());

	preparedStatement->execute();
}

void DAO_Funcionario::alteraFuncionario(string id, string nome, string cpf, string salario, string tipoFunc) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("UPDATE Funcionario SET NOME = ?, CPF = ?, SALARIO = ?, TIPO_FUNC = ? WHERE ID_FUNC = ?");

	preparedStatement->setString(1, nome.c_str());
	preparedStatement->setString(2, cpf.c_str());
	preparedStatement->setString(3, salario.c_str());
	preparedStatement->setString(4, tipoFunc.c_str());
	preparedStatement->setString(5, id.c_str());

	preparedStatement->execute();
}

void DAO_Funcionario::excluiFuncionario(string id) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("DELETE FROM Funcionario WHERE ID_FUNC = ?");

	preparedStatement->setString(1, id.c_str());
	preparedStatement->execute();
}