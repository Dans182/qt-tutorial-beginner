#include <QCoreApplication>
#include <QDebug>

void suma2(int &numero){
    numero = numero + 2;
}

void suma2(int *puntero){
    *puntero = *puntero + 2;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int numero = 10;
    qDebug() << numero; //10
    int &referencia = numero;
    int *puntero = &numero;
    suma2(referencia); //12;
    qDebug() << "referencia" << numero;
    suma2(puntero); //14;
    qDebug() << "referencia" << numero;

    return a.exec();
}
