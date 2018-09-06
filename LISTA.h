/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#ifndef LISTA_H
#define LISTA_H
#define TRUE 1
#define FALSE 0



#define TRUE 0;
#define FALSE -1;

typedef struct dato {
    int dato;
} Dato;

typedef struct nodo {
    Nodo *anterior;
    Dato dato;
    Nodo *siguiente;
} Nodo;

typedef struct lista {
    int cantidadNodos;
    Nodo *primerNodo;
} Lista;



#endif /* LISTA_H */

