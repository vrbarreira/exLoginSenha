#pragma once
#ifndef DAO_FUNCIONARIO_H
#define DAO_FUNCIONARIO_H
#include "Funcionário.h"
#include "MySQLDAO.h"
#include <iostream>
#include <string>

using sql::ResultSet;
using namespace std;

class DAO_Funcionario
{
private:
	static DAO_Funcionario * instance;
public:
	static DAO_Funcionario* getInstance();

	virtual ~DAO_Funcionario();

	ResultSet* selecionarFuncionario();
	ResultSet* selecionarFuncionarioEquipe(string equipe);
	void insereFuncionario(string nome, string cpf, string salario, string tipoFunc);
	void insereFuncionarioUser(string nome, string cpf, string salario, string tipoFunc, string usuario);
	void insereFuncionarioEquipe(string nome, string cpf, string salario, string tipoFunc, string equipe);
	void insereFuncionarioUE(string nome, string cpf, string salario, string tipoFunc, string usuario, string equipe);
	void alteraFuncionario(string id, string nome, string cpf, string salario, string tipoFunc);
	void alteraFuncionarioUser(string id, string nome, string cpf, string salario, string tipoFunc, string usuario);
	void alteraFuncionarioEquipe(string id, string nome, string cpf, string salario, string tipoFunc, string equipe);
	void alteraFuncionarioUE(string id, string nome, string cpf, string salario, string tipoFunc, string usuario, string equipe);
	void excluiFuncionario(string id);
};

#endif