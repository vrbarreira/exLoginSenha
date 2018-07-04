#pragma once

#ifndef Controle_CU02_H
#define Controle_CU02_H

#include "DAO_Buraco.h"
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

	ResultSet* selecionarBuraco();
	void insereBuraco(string nome, string tipo, string custoDeManutencao);
	void alteraBuraco(string id, string nome, string tipo, string custoDeManutencao);
	void excluiBuraco(string id);
};

#endif