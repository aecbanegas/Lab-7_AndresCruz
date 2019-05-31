#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using std::string;
class Persona{
    private:
        string nacion;
        string nombre;
        int edad;
        bool sexo;
        Elemento elemento;
        Poder poder;
    public:
        virtual string toString();
        Persona(string,string,int,bool,Elemento,Poder);
};
#endif