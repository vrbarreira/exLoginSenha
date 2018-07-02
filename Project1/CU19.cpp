#include "CU19.h"
//Begin section for file CU19.cpp
//TODO: Add definitions that you want preserved
//End section for file CU19.cpp
using sql::ResultSet;

CU19* CU19::instance = 0;

//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
CU19::CU19() 
{
    //TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
CU19::~CU19() 
{
    //TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"

CU19* CU19::getInstance()
{
	if (instance == 0)
		instance = new CU19();
	return instance;
}

ResultSet* CU19::selecionarEquipe() {
	DAO_Equipe* dao = DAO_Equipe::getInstance();
	return dao->selecionarEquipe();
}

void CU19::insereEquipe(string nome, string numTrab, string custoDesloc, string custoHora, string horarioServ, string horarioTerm) {
	DAO_Equipe* dao = DAO_Equipe::getInstance();
	dao->insereEquipe(nome, numTrab, custoDesloc, custoHora, horarioServ, horarioTerm);
}

void CU19::alteraEquipe(string id, string nome, string numTrab, string custoDesloc, string custoHora, string horarioServ, string horarioTerm) {
	DAO_Equipe* dao = DAO_Equipe::getInstance();
	dao->alteraEquipe(id, nome, numTrab, custoDesloc, custoHora, horarioServ, horarioTerm);
}

void CU19::excluiEquipe(string id) {
	DAO_Equipe* dao = DAO_Equipe::getInstance();
	dao->excluiEquipe(id);
}