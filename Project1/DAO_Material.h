#pragma once
#ifndef DAO_MATERIAL_H
#define DAO_MATERIAL_H
#include "Material.h"
#include "MySQLDAO.h"
#include <iostream>
#include <string>

using sql::ResultSet;
using namespace std;

class DAO_Material
{
private:
	static DAO_Material * instance;
public:
	static DAO_Material* getInstance();

	virtual ~DAO_Material();

	ResultSet* selecionarMaterial();
	void insereMaterial(string tipo, string unidadeMedida, string custoPorMedida, string qtdEstoque);
	void alteraMaterial(string tipo, string unidadeMedida, string custoPorMedida);
	void alteraMaterial(string tipo, string qtdEstoque);
	void excluiMaterial(string id);
};

#endif#pragma once
