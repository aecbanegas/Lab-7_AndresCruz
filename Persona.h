#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using std::string;
class Persona{
    protected:
        string nacion;
        string nombre;
        int edad;
        bool sexo;
    public:
        virtual string toString();
        virtual string Tipo();
        Persona(string,string,int,bool);
};
#endif