#include <QCoreApplication>
#include <QDebug>

//la recursividad consiste en una función que se llama así misma

void function(int numero){
    //recibe un numero entero
    //cuando es función void, se puede poner un return vacio, que indica que termina la función

    if (numero == 0){
        return;
    }
    qDebug() << numero;
    numero = numero - 1;
    function(numero);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    function(10);

    return a.exec();
}
