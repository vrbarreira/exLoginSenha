#include "CU18.h"
using sql::ResultSet;
//Begin section for file CU18.cpp
//TODO: Add definitions that you want preserved
//End section for file CU18.cpp

CU18* CU18::instance = 0;

//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
CU18::CU18() 
{
    //TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
CU18::~CU18() 
{
    //TODO Auto-generated method stub
}

CU18* CU18::getInstance()
{
	if (instance == 0)
		instance = new CU18();
	return instance;
}

ResultSet* CU18::selecionarFuncionario() {
	DAO_Funcionario* dao = DAO_Funcionario::getInstance();
	return dao->selecionarFuncionario();
}

ResultSet* CU18::selecionarFuncionarioEquipe(string equipe) {
	DAO_Funcionario* dao = DAO_Funcionario::getInstance();
	return dao->selecionarFuncionarioEquipe(equipe);
}


void CU18::insereFuncionario(string nome, string cpf, string salario, string tipoFunc) {
	DAO_Funcionario* dao = DAO_Funcionario::getInstance();
	dao->insereFuncionario(nome, cpf, salario, tipoFunc);
}

void CU18::alteraFuncionario(string id, string nome, string cpf, string salario, string tipoFunc) {
	DAO_Funcionario* dao = DAO_Funcionario::getInstance();
	dao->alteraFuncionario(id, nome, cpf, salario, tipoFunc);
}

void CU18::excluiFuncionario(string id) {
	DAO_Funcionario* dao = DAO_Funcionario::getInstance();
	dao->excluiFuncionario(id);
}