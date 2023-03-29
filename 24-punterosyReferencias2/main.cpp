#include <QCoreApplication>
#include <QDebug>

//Con referencias
void suma2(int &numero){ //si no uso el & de referencia, se consideraría que la función espera un parámetro, nada mas. Y el resultado de esta función sería el valor
    //de la variable numero, o sea, 10.
    //En cambio, al referenciarla, la función suma no espera un parámetro, sino directamente apunta a una función llamada "numero"
    numero = numero + 2;
}

//Con punteros
void suma3(int *puntero){ //si no uso el & de referencia, se consideraría que la función espera un parámetro, nada mas. Y el resultado de esta función sería el valor
    //de la variable numero, o sea, 10.
    //En cambio, al referenciarla, la función suma no espera un parámetro, sino directamente apunta a una función llamada "numero"
    *puntero = *puntero + 2;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int numero = 10;
    suma2(numero);
    qDebug() << "referencias" << numero;

    int numero2 = 10;
    suma3(&numero2);
    qDebug() << "puntero" << numero;

    return a.exec();
}
