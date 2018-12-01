#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using std::cout;

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
:{

}
#endif
