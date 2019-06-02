#include "arbolb.h"

Pagina *ArbolB::getRaiz() const
{
    return raiz;
}

void ArbolB::setRaiz(Pagina *value)
{
    raiz = value;
}

int ArbolB::getOrden() const
{
    return orden;
}

void ArbolB::setOrden(int value)
{
    orden = value;
}

ArbolB::ArbolB()
{
    orden=0;
    raiz =nullptr;
}

ArbolB::ArbolB(int m)
{
    orden=m;
    raiz =nullptr;
}


void ArbolB::crear()
{
    orden =0;
    raiz  = nullptr;
}


bool ArbolB::buscarNodo(Pagina *actual, tipoClave cl, int &k)
{
    int index;
    bool encontrado = false;
    if(cl < actual->getClave(1))
    {
        encontrado = false;
        index =0;
    }else
    {
        //orden decendente
        index = actual->getCuenta();
        while (cl <  actual->getClave(index) && (index >1) )
        {
            index--;
            encontrado = cl==actual->getClave(index);
        }
    }
    k=index;
    return encontrado;
}


Pagina* ArbolB::buscar(tipoClave cl, int &n)
{
    return buscar(raiz, cl,n);
}

Pagina* ArbolB::buscar(Pagina *actual, tipoClave cl, int &n)
{
    if(actual== nullptr)
    {
        return nullptr;
    }else
    {
        bool esta = buscarNodo(actual,cl,n);
        if(esta)//la clave se encuentra en el nodo actual
        {
            return actual;
        }else
        {
            return buscar(actual->getRama(n),cl,n);//llamada recursiva
        }

    }
}


















