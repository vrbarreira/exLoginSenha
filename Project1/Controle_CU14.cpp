#include "Controle_CU14.h"
//#include "DAO_equipamento.h"
using sql::ResultSet;

Controle_CU14* Controle_CU14::instance = 0;

Controle_CU14::~Controle_CU14()
{

}

Controle_CU14* Controle_CU14::getInstance()
{
	if (instance == 0)
		instance = new Controle_CU14();
	return instance;
}

ResultSet* Controle_CU14::selecionarEquipamento() {
	DAO_Equipamento* dao = DAO_Equipamento::getInstance();
	return dao->selecionarEquipamento();
}

void Controle_CU14::insereEquipamento(string nome, string tipo, string custoDeManutencao) {
	DAO_Equipamento* dao = DAO_Equipamento::getInstance();
	dao->insereEquipamento(nome, tipo, custoDeManutencao);
}

void Controle_CU14::alteraEquipamento(string id, string nome, string tipo, string custoDeManutencao) {
	DAO_Equipamento* dao = DAO_Equipamento::getInstance();
	dao->alteraEquipamento(id, nome, tipo, custoDeManutencao);
}

void Controle_CU14::excluiEquipamento(string id) {
	DAO_Equipamento* dao = DAO_Equipamento::getInstance();
	dao->excluiEquipamento(id);
}