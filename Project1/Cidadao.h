#ifndef CIDADAO_H
#define CIDADAO_H
//Begin section for file Cidadao.h
//TODO: Add definitions that you want preserved
//End section for file Cidadao.h


class Notifica��o; //Dependency Generated Source:Cidadao Target:Notifica��o


class Buraco; //Dependency Generated Source:Cidadao Target:Buraco





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Cidadao
{
    //Begin section for Cidadao
    //TODO: Add attributes that you want preserved
    //End section for Cidadao

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int id;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char nomeCidadao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char cpf;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int numContata��es;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notifica��o * notifica��o;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Buraco * buraco;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Cidadao(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Cidadao(); 



        //get id
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_id(); 



        //set id
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_id(int id); 



        //get nomeCidadao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_nomeCidadao(); 



        //set nomeCidadao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_nomeCidadao(char nomeCidadao); 



        //get cpf
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_cpf(); 



        //set cpf
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_cpf(char cpf); 



        //get numContata��es
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_numContata��es(); 



        //set numContata��es
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_numContata��es(int numContata��es); 



        //get notifica��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notifica��o * get_notifica��o(); 



        //set notifica��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_notifica��o(Notifica��o * notifica��o); 



        //get buraco
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Buraco * get_buraco(); 



        //set buraco
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_buraco(Buraco * buraco); 



};  //end class Cidadao



#endif
