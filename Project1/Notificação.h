#ifndef NOTIFICA��O_H
#define NOTIFICA��O_H
//Begin section for file Notifica��o.h
//TODO: Add definitions that you want preserved
//End section for file Notifica��o.h


class Fotos; //Dependency Generated Source:Notifica��o Target:Fotos


class Cidadao; //Dependency Generated Source:Notifica��o Target:Cidadao





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Notifica��o
{
    //Begin section for Notifica��o
    //TODO: Add attributes that you want preserved
    //End section for Notifica��o

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int id;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char meioComunic;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char dataHoraNotif;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char dataHoraResposta;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char textoDaResposta;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        bool respondida;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Fotos * fotos;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Cidadao * cidadao;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notifica��o(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Notifica��o(); 



        //get id
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_id(); 



        //set id
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_id(int id); 



        //get meioComunic
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_meioComunic(); 



        //set meioComunic
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_meioComunic(char meioComunic); 



        //get dataHoraNotif
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_dataHoraNotif(); 



        //set dataHoraNotif
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_dataHoraNotif(char dataHoraNotif); 



        //get dataHoraResposta
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_dataHoraResposta(); 



        //set dataHoraResposta
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_dataHoraResposta(char dataHoraResposta); 



        //get textoDaResposta
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char get_textoDaResposta(); 



        //set textoDaResposta
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_textoDaResposta(char textoDaResposta); 



        //get respondida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        bool get_respondida(); 



        //set respondida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_respondida(bool respondida); 



        //get fotos
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Fotos * get_fotos(); 



        //set fotos
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_fotos(Fotos * fotos); 



        //get cidadao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Cidadao * get_cidadao(); 



        //set cidadao
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_cidadao(Cidadao * cidadao); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Registra_notifica��o(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void registraNotifica��o(); 



};  //end class Notifica��o



#endif
