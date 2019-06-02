#ifndef ARBOLB_H
#define ARBOLB_H

#include "pagina.h"


class ArbolB
{

protected:
    int orden;
    Pagina* raiz;
public:
    ArbolB();
    ArbolB(int m);

    //metodos de acceso
    Pagina *getRaiz() const;
    void setRaiz(Pagina *value);
    int getOrden() const;
    void setOrden(int value);

    void crear();
    Pagina* buscar(tipoClave cl, int &n);
    void insertar(tipoClave cl);
    void eliminar(tipoClave cl);

private:
    bool buscarNodo(Pagina*   actual, tipoClave cl, int &k);
    Pagina* buscar(Pagina*   actual, tipoClave cl, int &n);
};

#endif // ARBOLB_H
