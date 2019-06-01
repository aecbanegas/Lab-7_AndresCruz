#include "Persona.h"
#include "Poder.h"
#ifndef FIRE_H
#define FIRE_H
class Fire:public Persona{
    private:
        double cicatrices;
        double victorias;
        Poder* poder;
    public:
        Fire(string,string,int,bool,double,double,Poder*);
        virtual string toString();
        virtual string Tipo();
}; 
#endif