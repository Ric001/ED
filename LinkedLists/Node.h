#ifndef Node_H
#define Node_H

template < typename TIPONODO> class List;

template <typename TIPONODO> 
class Nodo {
    friend class List < TIPONODO >;

    public:
        Nodo( const TIPONODO &);
        TIPONODO obtenerDatos() const;
    private:
        TIPONODO dato;
        Nodo<TIPONODO> *_siguiente;
};

template < typename TIPONODO >
Nodo< TIPONODO >::Nodo( const TIPONODO &info):
    dato(info), _siguiente(NULL) {

}

template < typename TIPONODO >
TIPONODO Nodo<TIPONODO>::obtenerDatos() const {
    return dato;
}

#endif