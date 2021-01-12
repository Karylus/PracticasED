#include "Punto.h"
#include <string>
#include <iostream>

using namespace std;

Punto::Punto()
{
    latitud = 0;
    longitud = 0;
    nombre = "";
};

Punto::Punto(double lat, double lon, string n)
{
    latitud = lat;
    longitud = lon;
    nombre = n;
};

Punto::Punto(const Punto &p)
{
    latitud = p.latitud;
    longitud = p.longitud;
    nombre = p.nombre;
};

double Punto::getLatitud()
{
    return latitud;
};

double Punto::getLongitud()
{
    return longitud;
};

string Punto::getNombre()
{
    return nombre;
};

void Punto::setLatitud(double lat)
{
    latitud = lat;
};

void Punto::setLongitud(double lon)
{
    longitud = lon;
};

void Punto::setNombre(string n)
{
    nombre = n;
};

Punto &Punto::operator=(const Punto &p)
{
    latitud = p.latitud;
    longitud = p.longitud;
    nombre = p.nombre;
};

ostream &operator<<(ostream &os, Punto p){
    os << "(" << p.getLatitud() << "," << p.getLongitud() << ")\n";

    return os;
};