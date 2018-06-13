#ifndef CIDADAO_H
#define CIDADAO_H
//Begin section for file Cidadao.h
//TODO: Add definitions that you want preserved
//End section for file Cidadao.h


class Notificação; //Dependency Generated Source:Cidadao Target:Notificação


class Buraco; //Dependency Generated Source:Cidadao Target:Buraco





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Cidadao
{

    //Begin section for Cidadao
    //TODO: Add attributes that you want preserved
    //End section for Cidadao

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
         nomeCidadao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
         numContatações;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notificação * notificação;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Buraco * buraco;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Cidadao(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Cidadao(); 



        //get nomeCidadao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
         get_nomeCidadao(); 



        //set nomeCidadao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_nomeCidadao( nomeCidadao); 



        //get numContatações
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
         get_numContatações(); 



        //set numContatações
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_numContatações( numContatações); 



        //get notificação
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notificação * get_notificação(); 



        //set notificação
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_notificação(Notificação * notificação); 



        //get buraco
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Buraco * get_buraco(); 



        //set buraco
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_buraco(Buraco * buraco); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void getCidadao(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void construtor__cidadao(); 



};  //end class Cidadao



#endif
