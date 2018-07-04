#include "Controle_CU02.h"
//#include "DAO_Buraco.h"
using sql::ResultSet;

Controle_CU02* Controle_CU02::instance = 0;

Controle_CU02::~Controle_CU02()
{

}

Controle_CU02* Controle_CU02::getInstance()
{
	if (instance == 0)
		instance = new Controle_CU02();
	return instance;
}

ResultSet* Controle_CU02::selecionarBuraco() {
	DAO_Buraco* dao = DAO_Buraco::getInstance();
	return dao->selecionarBuraco();
}

void Controle_CU02::insereBuraco(string nome, string tipo, string custoDeManutencao) {
	DAO_Buraco* dao = DAO_Buraco::getInstance();
	dao->insereBuraco(nome, tipo, custoDeManutencao);
}

void Controle_CU02::alteraBuraco(string id, string nome, string tipo, string custoDeManutencao) {
	DAO_Buraco* dao = DAO_Buraco::getInstance();
	dao->alteraBuraco(id, nome, tipo, custoDeManutencao);
}

void Controle_CU02::excluiBuraco(string id) {
	DAO_Buraco* dao = DAO_Buraco::getInstance();
	dao->excluiBuraco(id);
}