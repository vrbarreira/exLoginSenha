#pragma once

#ifndef Controle_CU14_H
#define Controle_CU14_H

#include "DAO_equipamento.h"
#include <iostream>
#include <string>
using namespace std;

//#include "../dominio"


class Controle_CU14
{
private:
	static Controle_CU14 * instance;
public:
	static Controle_CU14* getInstance();

	virtual ~Controle_CU14();

	void insereEquipamento(string nome, string tipo, string custoDeManutencao);

};

#endif