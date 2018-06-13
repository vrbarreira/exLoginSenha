#pragma once
#ifndef DAO_EQUIPAMENTO_H
#define DAO_EQUIPAMENTO_H
#include "MySQLDAO.h"
#include <iostream>
#include <string>

using namespace std;

class DAO_Equipamento
{
private:
	static DAO_Equipamento * instance;
public:
	static DAO_Equipamento* getInstance();

	virtual ~DAO_Equipamento();

	void insereEquipamento(string nome, string tipo, string custoDeManutencao);

};

#endif