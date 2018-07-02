#include "Material.h"
#include "DAO_Material.h"
#include "MySQLDAO.h"
#include <string>
using std::string;
using sql::ResultSet;

DAO_Material* DAO_Material::instance = 0;

DAO_Material::~DAO_Material()
{
}

DAO_Material* DAO_Material::getInstance()
{
	if (instance == 0)
		instance = new DAO_Material();
	return instance;
}

ResultSet* DAO_Material::selecionarMaterial() {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	statement = connection->createStatement();
	resultSet = statement->executeQuery("SELECT ID_MATERIAL, TIPO, UNIDADE_MEDIDA, CUSTO_POR_MEDIDA, QTD_ESTOQUE FROM Material ORDER BY ID_MATERIAL ASC");

	return resultSet;
}

void DAO_Material::insereMaterial(string tipo, string unidadeMedida, string custoPorMedida, string qtdEstoque) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("insert into Material (TIPO, UNIDADE_MEDIDA, CUSTO_POR_MEDIDA, QTD_ESTOQUE) values (?,?,?,?)");

	preparedStatement->setString(1, tipo.c_str());
	preparedStatement->setString(2, unidadeMedida.c_str());
	preparedStatement->setString(3, custoPorMedida.c_str());
	preparedStatement->setString(4, qtdEstoque.c_str());

	preparedStatement->execute();
}

void DAO_Material::alteraMaterial(string tipo, string unidadeMedida, string custoPorMedida) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("UPDATE Material SET UNIDADE_MEDIDA = ?, CUSTO_POR_MEDIDA = ? WHERE TIPO = ?");

	preparedStatement->setString(1, unidadeMedida.c_str());
	preparedStatement->setString(2, custoPorMedida.c_str());
	preparedStatement->setString(3, tipo.c_str());

	preparedStatement->execute();
}

void DAO_Material::alteraMaterial(string tipo, string qtdEstoque) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("UPDATE Material SET QTD_ESTOQUE = ? WHERE TIPO = ?");

	preparedStatement->setString(1, qtdEstoque.c_str());
	preparedStatement->setString(2, tipo.c_str());

	preparedStatement->execute();
}

void DAO_Material::excluiMaterial(string id) {
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();

	preparedStatement = connection->prepareStatement("DELETE FROM Material WHERE ID_MATERIAL = ?");

	preparedStatement->setString(1, id.c_str());
	preparedStatement->execute();
}