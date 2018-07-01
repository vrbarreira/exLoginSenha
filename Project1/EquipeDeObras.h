#ifndef EQUIPEDEOBRAS_H
#define EQUIPEDEOBRAS_H
//Begin section for file EquipeDeObras.h
//TODO: Add definitions that you want preserved
//End section for file EquipeDeObras.h
#include "Funcionário.h"



class Despachador; //Dependency Generated Source:EquipeDeObras Target:Despachador


class OrdemDeServiço; //Dependency Generated Source:EquipeDeObras Target:OrdemDeServiço





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class EquipeDeObras : Funcionário
{
    //Begin section for EquipeDeObras
    //TODO: Add attributes that you want preserved
    //End section for EquipeDeObras

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char nome;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int numeroDeTrabalhadores;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float custoDeDeslocamento;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float custoPorHora;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char horarioDeServico;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Despachador * despachador;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServiço * ordemDeServiço;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        EquipeDeObras(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~EquipeDeObras(); 



        //get nome
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_nome(); 



        //set nome
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_nome(char nome); 



        //get numeroDeTrabalhadores
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_numeroDeTrabalhadores(); 



        //set numeroDeTrabalhadores
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_numeroDeTrabalhadores(int numeroDeTrabalhadores); 



        //get custoDeDeslocamento
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float get_custoDeDeslocamento(); 



        //set custoDeDeslocamento
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_custoDeDeslocamento(float custoDeDeslocamento); 



        //get custoPorHora
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float get_custoPorHora(); 



        //set custoPorHora
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_custoPorHora(float custoPorHora); 



        //get horarioDeServico
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_horarioDeServico(); 



        //set horarioDeServico
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_horarioDeServico(char horarioDeServico); 



        //get despachador
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Despachador * get_despachador(); 



        //set despachador
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_despachador(Despachador * despachador); 



        //get ordemDeServiço
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServiço * get_ordemDeServiço(); 



        //set ordemDeServiço
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ordemDeServiço(OrdemDeServiço * ordemDeServiço); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void finalizarOrdemDeServico(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void finalizarSaida(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void adicionarFotoConserto(); 



};  //end class EquipeDeObras



#endif
