#include "CU17.h"
//Begin section for file CU17.cpp
//TODO: Add definitions that you want preserved
//End section for file CU17.cpp
using sql::ResultSet;

CU17* CU17::instance = 0;

//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
CU17::CU17() 
{
    //TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
CU17::~CU17() 
{
    //TODO Auto-generated method stub
}
CU17* CU17::getInstance()
{
	if (instance == 0)
		instance = new CU17();
	return instance;
}

ResultSet* CU17::selecionarMaterial() {
	DAO_Material* dao = DAO_Material::getInstance();
	return dao->selecionarMaterial();
}

void CU17::insereMaterial(string tipo, string unidadeMedida, string custoPorMedida, string qtdEstoque) {
	DAO_Material* dao = DAO_Material::getInstance();
	dao->insereMaterial(tipo, unidadeMedida, custoPorMedida, qtdEstoque);
}

void CU17::alteraMaterial(string tipo, string unidadeMedida, string custoPorMedida) {
	DAO_Material* dao = DAO_Material::getInstance();
	dao->alteraMaterial(tipo, unidadeMedida, custoPorMedida);
}

void CU17::alteraMaterial(string tipo, string qtdEstoque) {
	DAO_Material* dao = DAO_Material::getInstance();
	dao->alteraMaterial(tipo, qtdEstoque);
}

void CU17::excluiMaterial(string id) {
	DAO_Material* dao = DAO_Material::getInstance();
	dao->excluiMaterial(id);
}