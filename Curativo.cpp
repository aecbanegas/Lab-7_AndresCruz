#include "Curativo.h"
#include <sstream>
using std::stringstream;
string Curativo::toString(){
    stringstream mostrar;
    mostrar<<"Su poder es tipo: Curativo El tipo de curacion es: "<<tipo;
    string imprimir=mostrar.str();
    return imprimir;
}
Curativo::Curativo(string tip){
    tipo=tip;
}