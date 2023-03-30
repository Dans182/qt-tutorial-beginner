#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int i, j;
    bool esNumeroPrimo;

    for(i = 2; i <= 100; ++i){ //i empieza siendo el número 2, porque 2 es el primer número primo.
        esNumeroPrimo = true; //acá le decimos que la "i" es un número primo. porque el primer número primo es el 2.
        for(j = 2; j < i; ++j){ //aca verificamos si efectivamente ese numero es primo.
            if (i % j == 0){ //si comprobamos que la división entre las dos (i y j), da como residuo 0, no es numero primo.
                esNumeroPrimo = false; // aca decimos que i no es un número primo.
            }
        }
        if (esNumeroPrimo){
            qDebug() << i;
        }
    }

    //Los números primos son aquellos que no existen divisores enteros para estos números. Solo el 1 y el número mismo.

    return a.exec();
}
