#include "Poder.h"
#ifndef CURATIVO_H
#define CURATIVO_H
class Curativo:public Poder{
    private:
        string tipo;
    public:
        virtual string toString();
        Curativo(string);
};
#endif