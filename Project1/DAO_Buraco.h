#pragma once
#ifndef DAO_Buraco_H
#define DAO_Buraco_H
#include "Buraco.h"
#include "MySQLDAO.h"
#include <iostream>
#include <string>

using sql::ResultSet;
using namespace std;

class DAO_Buraco
{
private:
	static DAO_Buraco * instance;
public:
	static DAO_Buraco* getInstance();

	virtual ~DAO_Buraco();

	ResultSet* selecionarBuraco();
	void insereBuraco(string nome, string tipo, string custoDeManutencao);
	void alteraBuraco(string id, string nome, string tipo, string custoDeManutencao);
	void excluiBuraco(string id);
};

#endif