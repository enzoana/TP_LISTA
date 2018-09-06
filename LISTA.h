/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LISTA.h
 * Author: gonzalo
 *
 * Created on 6 de septiembre de 2018, 16:31
 */

#ifndef LISTA_H
#define LISTA_H
#define TRUE 1
#define FALSE 0


struct dato {
    int dato;
} typedef Dato;

struct nodo {
    Nodo *anterior;
    Dato dato;
    Nodo *siguiente;
} typedef Nodo;

struct lista {
    int cantidadNodos;
    Nodo *primerNodo;
} typedef Lista;

#endif /* LISTA_H */

