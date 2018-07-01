#ifndef DESPACHADOR_H
#define DESPACHADOR_H
//Begin section for file Despachador.h
//TODO: Add definitions that you want preserved
//End section for file Despachador.h
#include "Funcionário.h"



class EquipeDeObras; //Dependency Generated Source:Despachador Target:EquipeDeObras


class Saída; //Dependency Generated Source:Despachador Target:Saída





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Despachador : Funcionário
{
    //Begin section for Despachador
    //TODO: Add attributes that you want preserved
    //End section for Despachador

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        EquipeDeObras * equipeDeObras;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Saída * saída;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Despachador(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Despachador(); 



        //get equipeDeObras
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        EquipeDeObras * get_equipeDeObras(); 



        //set equipeDeObras
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_equipeDeObras(EquipeDeObras * equipeDeObras); 



        //get saída
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Saída * get_saída(); 



        //set saída
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_saída(Saída * saída); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void comporSaida(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void consultarOrdemServiço(); 



};  //end class Despachador



#endif
