#include "almacen_rutas.h"
#include "Ruta.h"
#include <string>
#include <utility>
#include <iostream>

using namespace std;

almacen_rutas::almacen_rutas(){
    //map se inicializa solo
};

map<string, Ruta> almacen_rutas::getDatos()
{
    return datos;
};

Ruta almacen_rutas::getRuta(string codigo)
{
    map<string, Ruta>::iterator it = datos.find(codigo);

    return it->second;
};

void almacen_rutas::insert(Ruta r)
{
    datos.insert(pair<string, Ruta>("",r));
}

istream &operator>>(istream &is, almacen_rutas &r)
{
    Ruta p;
    almacen_rutas aux;

    while (is >> p)
    {
        aux.insert(p);
    }

    r = aux;

    return is;
};

ostream &operator<<(ostream &os, almacen_rutas &r)
{
    map<string, Ruta>::iterator it;
    for (it = r.datos.begin(); it != r.datos.end(); ++it)
    {
        os << "R" << it->first << "\t" << it->second << endl;
    }

    return os;
};
