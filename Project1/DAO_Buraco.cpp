#include "Buraco.h"
#include "DAO_Buraco.h"
#include "MySQLDAO.h"
#include <string>
using std::string;
using sql::ResultSet;

DAO_Buraco* DAO_Buraco::instance = 0;

DAO_Buraco::~DAO_Buraco()
{
}

DAO_Buraco* DAO_Buraco::getInstance()
{
	if (instance == 0)
		instance = new DAO_Buraco();
	return instance;
}

ResultSet* DAO_Buraco::selecionarBuraco() {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	statement = connection->createStatement();
	resultSet = statement->executeQuery("SELECT ID_Buraco, NOME, TIPO, CUSTO_MANUTENCAO FROM Buraco ORDER BY ID_Buraco ASC");

	return resultSet;
}

void DAO_Buraco::insereBuraco(string nome, string tipo, string custoDeManutencao) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("insert into Buraco (NOME, TIPO, CUSTO_MANUTENCAO) values (?,?,?)");

	preparedStatement->setString(1, nome.c_str());
	preparedStatement->setString(2, tipo.c_str());
	preparedStatement->setString(3, custoDeManutencao.c_str());

	preparedStatement->execute();
}

void DAO_Buraco::alteraBuraco(string id, string nome, string tipo, string custoDeManutencao) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("UPDATE Buraco SET NOME = ?, TIPO = ?, CUSTO_MANUTENCAO = ? WHERE ID_Buraco = ?");

	preparedStatement->setString(1, nome.c_str());
	preparedStatement->setString(2, tipo.c_str());
	preparedStatement->setString(3, custoDeManutencao.c_str());
	preparedStatement->setString(4, id.c_str());

	preparedStatement->execute();
}

void DAO_Buraco::excluiBuraco(string id) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("DELETE FROM Buraco WHERE ID_Buraco = ?");

	preparedStatement->setString(1, id.c_str());
	preparedStatement->execute();
}