#ifndef PAGINA_H
#define PAGINA_H

typedef int tipoClave;
class Pagina;
typedef Pagina *PPagina;

class Pagina
{

protected:
    tipoClave *claves;//puntero array de claves variables
    PPagina *ramas;   //puntero array de punteros a paginas variable
    int cuenta;       //numero de claves que almacena la pagina
private:
    int m;  //maximo numero de claves que puede almacenar la pagina

public:
    //crea una pagina vacia de un cierto orden dado
    Pagina(int orden);

    //decide si un nodo esta lleno
    bool nodoLLeno();

    //decide si una pagina tiene menos de la mitad de las claves
    bool nodoSemiVacio();

    //obtener la clave que ocupa la posicion i en el array de claves
    tipoClave getClave(int i);
    //cambiar la clave que ocupa la posicion i en el array de claves
    void setClave(int i, tipoClave clave);

    //obtener la rama que ocupa la posicion i en el array de ramas
    Pagina* getRama(int i );
    //cambiar la rama que ocupa la posicion i en el array de ramas
    void setRama(int i , Pagina* p);


    int getCuenta() const;
    void setCuenta(int value);
};

#endif // PAGINA_H
