#ifndef SA�DA_H
#define SA�DA_H
//Begin section for file Sa�da.h
//TODO: Add definitions that you want preserved
//End section for file Sa�da.h


class OrdemDeServi�o; //Dependency Generated Source:Sa�da Target:OrdemDeServi�o


class Fatura; //Dependency Generated Source:Sa�da Target:Fatura


class Despachador; //Dependency Generated Source:Sa�da Target:Despachador





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Sa�da
{
    //Begin section for Sa�da
    //TODO: Add attributes that you want preserved
    //End section for Sa�da

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int id;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char data;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char hor�rio;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServi�o * ordemDeServi�o;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Fatura * fatura;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Despachador * despachador;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Sa�da(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Sa�da(); 



        //get id
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_id(); 



        //set id
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_id(int id); 



        //get data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_data(); 



        //set data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_data(char data); 



        //get hor�rio
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_hor�rio(); 



        //set hor�rio
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_hor�rio(char hor�rio); 



        //get ordemDeServi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServi�o * get_ordemDeServi�o(); 



        //set ordemDeServi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ordemDeServi�o(OrdemDeServi�o * ordemDeServi�o); 



        //get fatura
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Fatura * get_fatura(); 



        //set fatura
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_fatura(Fatura * fatura); 



        //get despachador
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Despachador * get_despachador(); 



        //set despachador
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_despachador(Despachador * despachador); 



};  //end class Sa�da



#endif
