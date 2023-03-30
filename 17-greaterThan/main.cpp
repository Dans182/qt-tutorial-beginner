#include <QCoreApplication>
#include <QDebug>
#include <limits>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int A[] = {4, 2, 3, 1, 5};

    qDebug() << sizeof(A); //sizeof nos da el tamaño en bits de un array.
    int n = sizeof(A) / sizeof(int); //aca estoy indicando que divida el total de bits entre el peso en bit de un valor entero. Esto me indica que dentro del array hay 5 elementos.
    qDebug() << n;

    int menor = std::numeric_limits<int>::max();
    int mayor = std::numeric_limits<int>::min();

    for(int i = 0; i <= n; i++){
        if(A[i] >= mayor){
            mayor = A[i];
        }
        if(A[i] < menor){
            menor = A[i];//0 menor que 999
        }
    }

    qDebug() << "El número mayor del arreglo es: " << mayor;
    qDebug() << "El número menor del arreglo es: " << menor;
    return a.exec();
}

//en la primera iteracion, se pasa el número 4. Este termina siendo tanto el mayor como el menor.
//en la segunda iteración, se pasa el 2. Este no es mayor que el 4 (de var mayor) pero si menor que el 4 (de var menor) y pasa a ser el nuevo valor "menor".
//en la tercer iteración, se pasa el 3. Este no es mayor que el 4 (de var mayor) ni menor que el 2 (de var menor) y se continua a la otra iteracion.
//en la cuarta iteración, se pasa el 1. Este no es mayor que el 4 (de var mayor) pero si menor que el 2 (de var menor) y pasa a ser el nuevo valor "menor".
//en la quinta iteración, se pasa el 5. Este es mayor que el 4 (de var mayor) y reemplaza el valor antiguo y no es menor que el 1 (de var menor).
