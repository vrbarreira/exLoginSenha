//#include "OS.h"
#include "DAO_OS.h"
#include "MySQLDAO.h"
#include <string>
using std::string;
using sql::ResultSet;

DAO_OS* DAO_OS::instance = 0;

DAO_OS::~DAO_OS()
{
}

DAO_OS* DAO_OS::getInstance()
{
	if (instance == 0)
		instance = new DAO_OS();
	return instance;
}

ResultSet* DAO_OS::selecionarOS() {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	statement = connection->createStatement();
	resultSet = statement->executeQuery("SELECT ID_OS, ENDERECO, POSICAO_VIA FROM OS ORDER BY ID_OS ASC");

	return resultSet;
}

void DAO_OS::insereOS(string prioridade, string status) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("insert into OrdemDeServico (PRIORIDADE,STATUS,ID_BURACO) values (?,?,(select MAX(ID_BURACO) from Buraco))");

	preparedStatement->setString(1, prioridade.c_str());
	preparedStatement->setString(2, status.c_str());

	preparedStatement->execute();
}

void DAO_OS::alteraOS(string ID, string tamanho) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("UPDATE OS SET NUM_RECLAMACOES=NUM_RECLAMACOES+1,TAMANHO=? where ID_OS = ?;");

	preparedStatement->setString(1, tamanho.c_str());
	preparedStatement->setString(2, ID.c_str());

	preparedStatement->execute();
}

void DAO_OS::excluiOS(string id) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("DELETE FROM OS WHERE ID_OS = ?");

	preparedStatement->setString(1, id.c_str());
	preparedStatement->execute();
}