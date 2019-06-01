#include "Persona.h"
#include "Poder.h"
#ifndef EARTH_H
#define EARTH_H
class Earth:public Persona{
    private:
        double coles;
        int graduacion;
        Poder* poder;
    public:
        virtual string toString();
        Earth(string,string,int,bool,double,int,Poder*);
        virtual string Tipo();
};
#endif