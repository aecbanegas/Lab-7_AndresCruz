#include "Persona.h"
#ifndef NON_H
#define NON_H
class Non:public Persona{
    private:
        string trabajo;
        double fuerza;
        double velocidad;
    public:
        virtual string toString();
        Non(string,string,int,bool,string,double,double);
        virtual string Tipo();
};
#endif