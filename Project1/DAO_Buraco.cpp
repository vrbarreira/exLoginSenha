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
	resultSet = statement->executeQuery("SELECT ID_BURACO, ENDERECO, POSICAO_VIA FROM Buraco ORDER BY ID_Buraco ASC");

	return resultSet;
}

void DAO_Buraco::insereBuraco(string nome, string endereco, string tamanho, string num_rec, string pos_via, string num_recor) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("insert into Buraco (STATUS,ENDERECO,TAMANHO,NUM_RECLAMACOES,POSICAO_VIA,NUM_RECORR) values (?,?,?,?,?,?)");

	preparedStatement->setString(1, nome.c_str());
	preparedStatement->setString(2, endereco.c_str());
	preparedStatement->setString(3, tamanho.c_str());
	preparedStatement->setString(4, num_rec.c_str());
	preparedStatement->setString(5, pos_via.c_str());
	preparedStatement->setString(6, num_recor.c_str());

	preparedStatement->execute();
}

void DAO_Buraco::alteraBuraco(string ID, string tamanho){
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("UPDATE Buraco SET NUM_RECLAMACOES = NUM_RECLAMACOES + 1, tamanho = '?' where ID_BURACO = ?");

	preparedStatement->setString(1, tamanho.c_str());
	preparedStatement->setString(2, ID.c_str());

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