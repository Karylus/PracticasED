/**
 * @file Ruta.h
 * @author Juan Pedro Moreno Ruiz (juanpemoreno@correo.ugr.es)
 * @brief Clase que define una lista de puntos, formando una ruta que seguira el avion
 * @version 0.1
 * @date 2021-01-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once
#include <vector>
#include <string>
#include "Punto.h"

using namespace std;

class Ruta
{
private:
    string codigo;
    int longitud;
    vector<Punto> puntos;

public:
    /**
     * @brief Constructor por defecto de la clase
     * 
     */
    Ruta();

    /**
     * @brief Constructor por parametros de la clase
     * 
     * @param cod codigo de la ruta
     * @param lon numero de paradas de la ruta
     * @param 
     */
    Ruta(string cod, int lon);

    /**
     * @brief Constructor de copia de la clase
     * 
     * @param p Objeto ruta que queremos copiar
     */
    Ruta(const Ruta &p);

    /**
     * @brief Devuelve el codigo de la ruta
     * 
     * @return string codigo de la ruta
     */
    string getCodigo();

    /**
     * @brief Devuelve la longitud de la ruta
     * 
     * @return int numero de paradas de la ruta
     */
    int getLongitud();

    /**
     * @brief Devuelve la lista de los puntos de la ruta
     * 
     * @return vector<Punto> coordenadas de las paradas
     */
    vector<Punto> getPuntos();

    /**
     * @brief Cambia el valor de la latitud
     * 
     * @param cod nuevo codigo de la ruta
     */
    void setCodigo(string cod);

    /**
     * @brief Cambia el valor de las paradas
     * 
     * @param lon paradas que deseamos
     */
    void setLongitud(double lon);

    /**
     * @brief Cambia el nombre 
     * 
     * @param n vector<Punto> p nueva lista de paradas
     */
    void setPuntos(vector<Punto> p);

    /**
     * @brief Clase iteradora para la clase
     * 
     */
    class iterator
    {
    private:
        vector<Punto>::iterator d;

    public:
        iterator() {}
        iterator &operator++()
        {
            ++d;
            return *this;
        }

        iterator &operator--()
        {
            --d;
            return *this;
        }
        bool operator==(const iterator &it)
        {
            return it.d == d;
        }
        bool operator!=(const iterator &it)
        {
            return it.d != d;
        }
        const Punto &operator*()
        {
            return *d;
        }
        friend class Ruta;
    };

    /**
     * @brief Operador del flujo de entrada para la clase
     * 
     * @param is  flujo de entrada
     * @param r ruta que queremos actualizar
     * @return istream& referencia a la ruta actualizada
     */
    friend istream &operator>>(istream &is, Ruta r);

    /**
     * @brief Operador del flujo de salida para la clase
     * 
     * @param os  flujo de salida
     * @param r ruta que queremos imprimir
     * @return ostream& referencia a la ruta impresa
     */
    friend ostream &operator<<(ostream &os, Ruta r);
};