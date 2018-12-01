#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using std::cout;
using std::endl;
#include "Node.h"

template< typename TIPONODO >
class List {
    public:
    List();
    ~List();
    void append( const TIPONODO & );
    void preppend( const TIPONODO & );
    bool deleteFromFinal( TIPONODO & );
    bool deleteFromInit( TIPONODO & );
    bool isEmpty();
    void print() const;
    private:
        Nodo< TIPONODO > *first;
        Nodo < TIPONODO> *last;

        Nodo< TIPONODO >* getNewNode(); 
};

template< typename TIPONODO >
List <TIPONODO>::List()
: first( NULL ), last( NULL ) {
}

template< typename TIPONODO >
List <TIPONODO>::~List() {
    if ( !isEmpty() ) {
        cout << "Destruyendo nodes...\n";
        
        Nodo < TIPONODO > *actual = first;
        Nodo < TIPONODO > *temporal = NULL;

        while ( actual != NULL ) {
            temporal = actual;
            cout << "Borrando: " << temp->dato << '\n';
            actual = actual->_siguiente;
            delete temporal;
        }
        cout << "Todos los nodos han sido destruidos" << endl;
    }

    cout << "Advertencia: Lista Vacia al momento de su destruccion" << endl;
}


template <typename TIPONODO >
void List <TIPONODO>::append( const TIPONODO & value)
{
    Nodo<TIPONODO> nuevoNodo = getNewNode( value );
    if ( isEmpty() ) {
        first = nuevoNodo;
        last = nuevoNodo;
    } 
    else
    {
        last->siguiente = nuevoNodo;
        last = nuevoNodo; 
    }
}

template<typename TIPONODO>
void List<TIPONODO>::preppend( const TIPONODO & value ) {
    NodoLista < TIPONODO > *nuevoNodo = getNewNode( nodo );

    if ( isEmpty() ) {
        first = nuevoNodo;
        last = nuevoNodo;
    } 
    else 
    {
        nuevoNodo->siguiente = first;
        first = nuevoNodo;
    }
}
#endif
