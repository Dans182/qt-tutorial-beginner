#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //PUNTEROS
    int numero = 10;
    qDebug() << "numero" << numero;

    int *puntero; //un puntero se declara con el asterisco, seguido del nombre de la variable. Puedo inicializarla o definirla al momento.
    //int *puntero = nullptr; aca inicializamos la variable con nullptr... esto significa que no apunta a ningun lugar de la memoria.
    qDebug() << "*puntero" << puntero;
    //el puntero apunta a una dirección de memoria. De la memoria Ram.
    puntero = &numero; //el "&" me entrega la dirección en la memoria de la variable número. Así le asigno a la variable puntero, la dirección de a variable número
    qDebug() << "puntero apuntado a espacio de memoria de variable numero" << puntero;
    qDebug() << "*puntero" << *puntero;
    //puntero es una variable que almacena una dirección. Y esa dirección podemos usarla para modificar el contenido de la variable número

    *puntero = 9; //acá estoy modificando el valor de la variable número a través del puntero.

    qDebug() << numero; //9


    //REFERENCIAS

    int numero2 = 10;
    qDebug() << numero2;

    //aca se modifica el valor de la variable numero2, a través de la referencia
    int &referencia = numero2;
    referencia = 30;
    qDebug() << numero2;

    return a.exec();
}
