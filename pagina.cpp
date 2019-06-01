#include "pagina.h"

Pagina::Pagina(int orden)
{
    m = orden;
    claves = new tipoClave[orden];
    ramas  = new PPagina[orden];
    for (int k=0;k<=orden;k++) {
        ramas[k]=nullptr;
    }

}

bool Pagina::nodoLLeno()
{
    return (cuenta==m-1);
}

bool Pagina::nodoSemiVacio()
{
    return (cuenta<m/2);
}

tipoClave Pagina::Oclave(int i)
{
    return claves[i];
}

void Pagina::Pclave(int i, tipoClave clave)
{
    claves[i]=clave;
}

Pagina* Pagina::Orama(int i)
{
    return  ramas[i];
}

void Pagina::Prama(int i, Pagina *p)
{
    ramas[i] =p;
}

int Pagina::getCuenta() const
{
    return cuenta;
}

void Pagina::setCuenta(int value)
{
    cuenta = value;
}












