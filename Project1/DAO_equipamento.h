#pragma once
#ifndef DAO_EQUIPAMENTO_H
#define DAO_EQUIPAMENTO_H
#include "Equipamento.h"
#include "MySQLDAO.h"
#include <iostream>
#include <string>

using sql::ResultSet;
using namespace std;

class DAO_Equipamento
{
private:
	static DAO_Equipamento * instance;
public:
	static DAO_Equipamento* getInstance();

	virtual ~DAO_Equipamento();

	ResultSet* selecionarEquipamento();
	void insereEquipamento(string nome, string tipo, string custoDeManutencao);
	void alteraEquipamento(string id, string nome, string tipo, string custoDeManutencao);
	void excluiEquipamento(string id);
};

#endif