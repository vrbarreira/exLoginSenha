#pragma once

#ifndef Controle_CU02_H
#define Controle_CU02_H

#include "DAO_equipamento.h"
#include <iostream>
#include <string>
using namespace std;
using sql::ResultSet;

//#include "../dominio"


class Controle_CU02
{
private:
	static Controle_CU02 * instance;
public:
	static Controle_CU02* getInstance();

	virtual ~Controle_CU02();

	ResultSet* selecionarEquipamento();
	void insereEquipamento(string nome, string tipo, string custoDeManutencao);
	void alteraEquipamento(string id, string nome, string tipo, string custoDeManutencao);
	void excluiEquipamento(string id);
};

#endif