/**
 * @file almacen_rutas.h
 * @author Juan Pedro Moreno Ruiz (juanpemoreno@correo.ugr.es)
 * @brief Clase que define un almacen de rutas
 * @version 0.1
 * @date 2021-01-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

#include "Ruta.h"
#include <map>
#include <string>

class almacen_rutas
{
private:
    map<string, Ruta> datos;

public:
    /**
     * @brief Constructor por defecto de la clase
     * 
     */
    almacen_rutas();

    /**
     * @brief Devuelve los datos del almacen de ruta
     * 
     * @return map<string,Ruta> map con el almacen de rutas
     */
    map<string, Ruta> getDatos();

    /**
     * @brief Devuelve la ruta asociada a un codigo
     * 
     * @param codigo codigo asociado a una ruta
     * @return Ruta ruta asociada al codigo dado
     */
    Ruta getRuta(string codigo);

    /**
     * @brief Inserta en el alamacen una ruta nueva. 
     * 
     * @param r ruta que queremos añadir
     */
    void insert(Ruta r);

    /**
     * @brief Operador del flujo de entrada para la clase
     * 
     * @param is flujo de entrada
     * @param r almacen de rutas que queremos actualizar
     * @return istream& reeferencia al nuevo almacen de rutas
     */
    friend istream &operator>>(istream &is, almacen_rutas &r);

    /**
     * @brief Operador del flujo de salida para la clase
     * 
     * @param os  flujo de salida
     * @param r ruta que queremos imprimir
     * @return ostream& referencia a la ruta impresa
     */
    friend ostream &operator<<(ostream &os, almacen_rutas &r);

    /**
     * @brief Clase iteradora para la clase
     * 
     */
    class iterator
    {
    private:
        map<string, Ruta>::iterator d;

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
        const pair<const string, Ruta> &operator*()
        {
            return *d;
        }
        friend class almacen_rutas;
    };
};