#include "Equipamento.h"
#include "Recursos.h"
//Begin section for file Equipamento.cpp
//TODO: Add definitions that you want preserved
//End section for file Equipamento.cpp
#include <string>
using std::string;


//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Equipamento::Equipamento() 
{
    //TODO Auto-generated method stub
}

Equipamento::Equipamento(int id, string nome, string tipo, float custoDeManuten��o) : Recursos(id), nome(nome), tipo(tipo), custoDeManuten��o(custoDeManuten��o)
{
}

//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Equipamento::~Equipamento() 
{
    //TODO Auto-generated method stub
}

int Equipamento::get_id() {
	return Recursos::get_id();
}

void Equipamento::set_id(int id)
{
	//TODO Auto-generated method stub
	Recursos::set_id(id);
}

//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
string Equipamento::get_nome()
{
    //TODO Auto-generated method stub
    return nome;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
void Equipamento::set_nome(string nome)
{
    //TODO Auto-generated method stub
    this->nome = nome;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
string Equipamento::get_tipo()
{
    //TODO Auto-generated method stub
    return tipo;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
void Equipamento::set_tipo(string tipo)
{
    //TODO Auto-generated method stub
    this->tipo = tipo;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
float Equipamento::get_custoDeManuten��o() 
{
    //TODO Auto-generated method stub
    return custoDeManuten��o;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
void Equipamento::set_custoDeManuten��o(float custoDeManuten��o) 
{
    //TODO Auto-generated method stub
    this->custoDeManuten��o = custoDeManuten��o;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
OrdemDeServi�o * Equipamento::get_ordemDeServi�o() 
{
    //TODO Auto-generated method stub
    return ordemDeServi�o;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
void Equipamento::set_ordemDeServi�o(OrdemDeServi�o * ordemDeServi�o) 
{
    //TODO Auto-generated method stub
}
