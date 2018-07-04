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

void Controle_CU02::insereBuraco(string status, string endereco, string tamanho, string regiao, string posicao_via) {
	int prioridade = 0;
	if (tamanho[0] == 'g') prioridade = 1;
	else if(tamanho[0]=='m') prioridade = 2;
	else
	{
		prioridade = 3;
	}

	DAO_Buraco* dao = DAO_Buraco::getInstance();
	dao->insereBuraco(status,endereco,tamanho,"1",posicao_via,"1");

	DAO_OS* dao2 = DAO_OS::getInstance();
	dao2->insereOS(to_string(prioridade),"Pendente");
}

void Controle_CU02::alteraBuraco(string ID, string tamanho) {
	DAO_Buraco* dao = DAO_Buraco::getInstance();
	dao->alteraBuraco(ID, tamanho);
}

void Controle_CU02::excluiBuraco(string id) {
	DAO_Buraco* dao = DAO_Buraco::getInstance();
	dao->excluiBuraco(id);
}