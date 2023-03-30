#include <QCoreApplication>
#include <QDebug>
#include <cstdlib> //esta libreria me da las funciones srand y rand
#include <ctime>//esta libreria me da la función time
#include <QRandomGenerator> //esta libreria me da la función bound

int numeroAleatorio(int inferior, int superior){
    return rand() % inferior + superior;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //puedo llegar a la implementación por dos vías. Usando cstdlib y ctime (librerias de c++) o usando QRandomGenerator (librería de QT).

    srand(time(0)); //aca sembramos la semilla de la aleatoridad de la función. Siempre es 0
    int randomNumber = rand() % 10 + 1; //esto es una formula ya preestablecida. El 10 y el 1 son los límites. Un número entre 1 y 10
    qDebug() << randomNumber;

    qDebug() << numeroAleatorio(80, 88);

    qDebug() << RAND_MAX; //este es el valor máximo que nos puede dar la función rand.

    //esta es la mejor forma de obtener la aleatoridad en un número.
    qDebug() << QRandomGenerator::global()->bounded(100, 105);
    qDebug() << QRandomGenerator::global()->bounded(-105, 105);
    //Los "::" es el operador de resolución de ámbito
    //La "->" es el operador de acceso a miembros de un puntero.


    for (int i = 0; i < 10; i++){
        qDebug() << QRandomGenerator::global()->bounded(-105, 105);
    }

    return a.exec();
}


//habitualmente con srand solo funcionan margenes de aleatoridad con numeros pequeños. Con mas altos, pierde precisión
