#pragma once
#ifndef DAO_OS_H
#define DAO_OS_H
//#include "OS.h"
#include "MySQLDAO.h"
#include <iostream>
#include <string>

using sql::ResultSet;
using namespace std;

class DAO_OS
{
private:
	static DAO_OS * instance;
public:
	static DAO_OS* getInstance();

	virtual ~DAO_OS();

	ResultSet* selecionarOS();
	void insereOS(string prioridade, string status);
	void alteraOS(string ID, string tamanho);
	void excluiOS(string id);
};

#endif