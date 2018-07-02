#include "Equipamento.h"
#include "DAO_equipamento.h"
#include "MySQLDAO.h"
#include <string>
using std::string;
using sql::ResultSet;

DAO_Equipamento* DAO_Equipamento::instance = 0;

DAO_Equipamento::~DAO_Equipamento()
{
}

DAO_Equipamento* DAO_Equipamento::getInstance()
{
	if (instance == 0)
		instance = new DAO_Equipamento();
	return instance;
}

ResultSet* DAO_Equipamento::selecionarEquipamento() {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	statement = connection->createStatement();
	resultSet = statement->executeQuery("SELECT ID_EQUIPAMENTO, NOME, TIPO, CUSTO_MANUTENCAO FROM Equipamento ORDER BY ID_EQUIPAMENTO ASC");

	return resultSet;
}

void DAO_Equipamento::insereEquipamento(string nome, string tipo, string custoDeManutencao) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	
	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();
	
	preparedStatement = connection->prepareStatement("insert into Equipamento (NOME, TIPO, CUSTO_MANUTENCAO) values (?,?,?)");

	preparedStatement->setString(1, nome.c_str());
	preparedStatement->setString(2, tipo.c_str());
	preparedStatement->setString(3, custoDeManutencao.c_str());

	preparedStatement->execute();	
}

void DAO_Equipamento::alteraEquipamento(string id, string nome, string tipo, string custoDeManutencao) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	
	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("UPDATE Equipamento SET NOME = ?, TIPO = ?, CUSTO_MANUTENCAO = ? WHERE ID_EQUIPAMENTO = ?");

	preparedStatement->setString(1, nome.c_str());
	preparedStatement->setString(2, tipo.c_str());
	preparedStatement->setString(3, custoDeManutencao.c_str());
	preparedStatement->setString(4, id.c_str());

	preparedStatement->execute();
}

void DAO_Equipamento::excluiEquipamento(string id) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	
	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("DELETE FROM Equipamento WHERE ID_EQUIPAMENTO = ?");

	preparedStatement->setString(1, id.c_str());
	preparedStatement->execute();
}