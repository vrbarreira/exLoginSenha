#include "CU20.h"
//Begin section for file CU20.cpp
//TODO: Add definitions that you want preserved
//End section for file CU20.cpp

CU20* CU20::instance = 0;

CU20* CU20::getInstance()
{
	if (instance == 0)
		instance = new CU20();
	return instance;
}

//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
CU20::CU20() 
{
    //TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
CU20::~CU20() 
{
    //TODO Auto-generated method stub
}

ResultSet* CU20::selecionarUsuario(string login, string senha) {
	DAO_Usuario* dao = DAO_Usuario::getInstance();
	return dao->selecionarUsuario(login, senha);
}

//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
bool CU20::validarSenha(string login, string senha)
{
	ResultSet* user = this->selecionarUsuario(login, senha);
	int countUser = user->rowsCount();

	if (countUser == 0)
		return false;

    return true;
}
