#include "Ruta.h"
#include <iostream>

using namespace std;

Ruta::Ruta()
{
    codigo = "";
    longitud = 0;
    //el vector se inicializa solo
};

Ruta::Ruta(string cod, int lon)
{
    codigo = cod;
    longitud = lon;
    puntos.resize(lon);
};

Ruta::Ruta(const Ruta &p)
{
    codigo = p.codigo;
    longitud = p.longitud;
    puntos = p.puntos;
};

string Ruta::getCodigo()
{
    return codigo;
};

int Ruta::getLongitud()
{
    return longitud;
};

vector<Punto> Ruta::getPuntos()
{
    return puntos;
};

void Ruta::setCodigo(string cod)
{
    codigo = cod;
};

void Ruta::setLongitud(double lon)
{
    longitud = lon;
};

void Ruta::setPuntos(vector<Punto> p)
{
    puntos = p;
};

istream &operator>>(istream &is, Ruta r)
{
    double latitud, longitud;
    string nombre;
    int n_rutas;
    char separador;

    is >> nombre >> n_rutas;

    for (int i = 0; i < n_rutas; i++)
    {
        is >> separador >> latitud >> separador >> longitud >> separador;

        r.puntos.at(i) = Punto(latitud, longitud, "pais");
    }

    r.setCodigo(nombre);
    r.setLongitud(n_rutas);

    return is;
};

ostream &operator<<(ostream &os, Ruta r)
{
    os << r.getCodigo() << " " << r.getLongitud() << " ";

    for (int i = 0; i < r.getLongitud(); i++)
    {
        os << "(" << r.getPuntos().at(i).getLatitud() << "," << r.getPuntos().at(i).getLongitud() << ")";
    }

    return os;
};
