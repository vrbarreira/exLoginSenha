#include "Controle_CU14.h"
//#include "DAO_equipamento.h"


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

void Controle_CU14::insereEquipamento(string nome, string tipo, string custoDeManutencao) {
	DAO_Equipamento* dao = DAO_Equipamento::getInstance();
	dao->insereEquipamento(nome, tipo, custoDeManutencao);
}