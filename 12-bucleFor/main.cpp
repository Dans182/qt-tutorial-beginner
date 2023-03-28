#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //inicialización de variable - int x = 0;
    //despues la condición. Hasta donde queremos que la x llegue su valor - x <= 10
    //incremento o decremento
    for (int x = 0; x <= 10; x = x + 1){
        qDebug() << x;
    }

    //puedo declarar la variable fuera del for y hacer la asignación dentro.
    int y;
    for (y = 11; y <= 20; y += 1){
        qDebug() << y;
    }

    int z;
    for (z = 21; z <= 30; z++){
        qDebug() << z;
    }

    int yz = 31;
    for (; yz <= 40; ++yz){
        qDebug() << yz;
    }

    //pre incremento
    //post incremento

    return a.exec();
}
