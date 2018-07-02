#include "EquipeDeObras.h"
#include "DAO_Equipe.h"
#include "MySQLDAO.h"
#include <string>
using std::string;
using sql::ResultSet;

DAO_Equipe* DAO_Equipe::instance = 0;

DAO_Equipe::~DAO_Equipe()
{
}

DAO_Equipe* DAO_Equipe::getInstance()
{
	if (instance == 0)
		instance = new DAO_Equipe();
	return instance;
}

ResultSet* DAO_Equipe::selecionarEquipe() {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	statement = connection->createStatement();
	resultSet = statement->executeQuery("SELECT ID_EQUIPE, NOME, NUM_TRABALHADORES, CUSTO_DESLOC, CUSTO_HORA, HORARIO_SERVICO, HORARIO_TERMINO FROM EquipeDeObras ORDER BY ID_EQUIPE ASC");

	return resultSet;
}

void DAO_Equipe::insereEquipe(string nome, string numTrab, string custoDesloc, string custoHora, string horarioServ, string horarioTerm) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("insert into EquipeDeObras (NOME, NUM_TRABALHADORES, CUSTO_DESLOC, CUSTO_HORA, HORARIO_SERVICO, HORARIO_TERMINO) values (?,?,?,?,?,?)");

	preparedStatement->setString(1, nome.c_str());
	preparedStatement->setString(2, numTrab.c_str());
	preparedStatement->setString(3, custoDesloc.c_str());
	preparedStatement->setString(4, custoHora.c_str());
	preparedStatement->setString(5, horarioServ.c_str());
	preparedStatement->setString(6, horarioTerm.c_str());

	preparedStatement->execute();
}

void DAO_Equipe::alteraEquipe(string id, string nome, string numTrab, string custoDesloc, string custoHora, string horarioServ, string horarioTerm) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("UPDATE EquipeDeObras SET NOME = ?, NUM_TRABALHADORES = ?, CUSTO_DESLOC = ?, CUSTO_HORA = ?, HORARIO_SERVICO = ?, HORARIO_TERMINO = ? WHERE ID_EQUIPE = ?");

	preparedStatement->setString(1, nome.c_str());
	preparedStatement->setString(2, numTrab.c_str());
	preparedStatement->setString(3, custoDesloc.c_str());
	preparedStatement->setString(4, custoHora.c_str());
	preparedStatement->setString(5, horarioServ.c_str());
	preparedStatement->setString(6, horarioTerm.c_str());
	preparedStatement->setString(7, id.c_str());

	preparedStatement->execute();
}

void DAO_Equipe::excluiEquipe(string id) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("DELETE FROM EquipeDeObras WHERE ID_EQUIPE = ?");

	preparedStatement->setString(1, id.c_str());
	preparedStatement->execute();
}