#include "Persona.h"
#include "Poder.h"
#ifndef WATER_H
#define WATER_H
class Water:public Persona{
    private:
        bool tribu;
        string arma;
        Poder* poder;
    public:
        Water(string,string,int,bool,bool,string,Poder*);
        virtual string toString();
        virtual string Tipo();
};
#endif