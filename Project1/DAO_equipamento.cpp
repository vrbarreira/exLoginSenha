#include "DAO_equipamento.h"
#include "MySQLDAO.h"

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