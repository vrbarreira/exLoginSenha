#ifndef DESPACHADOR_H
#define DESPACHADOR_H
//Begin section for file Despachador.h
//TODO: Add definitions that you want preserved
//End section for file Despachador.h
#include "Funcion�rio.h"



class EquipeDeObras; //Dependency Generated Source:Despachador Target:EquipeDeObras


class Sa�da; //Dependency Generated Source:Despachador Target:Sa�da





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Despachador : Funcion�rio
{
    //Begin section for Despachador
    //TODO: Add attributes that you want preserved
    //End section for Despachador

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        EquipeDeObras * equipeDeObras;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Sa�da * sa�da;




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



        //get sa�da
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Sa�da * get_sa�da(); 



        //set sa�da
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_sa�da(Sa�da * sa�da); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void comporSaida(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void consultarOrdemServi�o(); 



};  //end class Despachador



#endif
