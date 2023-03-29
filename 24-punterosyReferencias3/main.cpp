#include <QCoreApplication>
#include <QDebug>

//referencia
void suma2(int &numero){
    numero = numero + 2;
}

//puntero
void suma2(int *puntero){
    *puntero = *puntero + 2;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int numero = 10;
    qDebug() << "el valor de la variable numero =" << numero; //10

    int &referencia = numero;
    qDebug() << "creacion de variable referencia, cuyo valor está referenciando sobre la variable numero. Referencia = " << referencia;

    int *puntero = &numero;
    qDebug() << "creacion de la variable puntero, que apunta al segmento de memoria de la variable numero. Segmento de memoria de var número = " << puntero;

    suma2(referencia); //12;
    qDebug() << "referencia" << numero;
    //ejecuto función suma2, que tiene de parámetro la variable referencia que a su vez refiere a la variable numero y ejecuta la suma 10 + 2.

    suma2(puntero); //14;
    qDebug() << "puntero" << numero;
    //ejecuto la función suma2, que apunta a la variable numero. El valor actual de numero es 12 + 2

    return a.exec();
}
