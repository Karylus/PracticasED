/**
 * @file Punto.h
 * @author Juan Pedro Moreno Ruiz (juanpemoreno@correo.ugr.es)
 * @brief Clase que define una coordenada en el mundo
 * @version 0.1
 * @date 2021-01-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once
#include <string>

using namespace std;

class Punto
{
private:
    double latitud;
    double longitud;
    string nombre;

public:
    /**
     * @brief Constructor por defecto de la clase
     * 
     */
    Punto();

    /**
     * @brief Constructor por parametros de la clase
     * 
     * @param lat coordenada de latitud del punto
     * @param long coordenada de longitud del punto
     * @param n nombre del punto
     */
    Punto(double lat, double lon, string n);

    /**
     * @brief Constructor de copia de la clase
     * 
     * @param p Objeto punto que queremos copiar
     */
    Punto(const Punto &p);

    /**
     * @brief Devuelve la latitud del punto
     * 
     * @return double valor de la latitud
     */
    double getLatitud();

    /**
     * @brief Devuelve la longitud del punto
     * 
     * @return double valor de la longitud
     */
    double getLongitud();

    /**
     * @brief Devuelve el nombre del punto
     * 
     * @return string nombre del punto
     */
    string getNombre();

    /**
     * @brief Cambia el valor de la latitud
     * 
     * @param lat latitud que deseamos
     */
    void setLatitud(double lat);

    /**
     * @brief Cambia el valor de la longitud
     * 
     * @param lon longitud que deamos
     */
    void setLongitud(double lon);

    /**
     * @brief Cambia el nombre 
     * 
     * @param n nombre que deseamos
     */
    void setNombre(string n);

    /**
     * @brief Operador de copia de la clase
     * 
     * @param p Punto que queremos copiar
     * @return Punto& referencia al punto con los valores actualizados
     */
    Punto &operator=(const Punto &p);

    /**
     * @brief Operador del flujo de salida para la clase
     * 
     * @param os  flujo de salida
     * @param p punto que queremos imprimir
     * @return os el punto impreso
     */
    friend ostream &operator<<(ostream &os, Punto p);
};