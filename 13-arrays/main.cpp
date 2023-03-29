#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Esta es una forma de declarar un array
    //declaro el array y cuantas variables o elementos yiene
    int A[6];

    //asigno valores en cada index
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    A[3] = 4;
    A[4] = 5;
    A[5] = 6;

    qDebug() << A[0];
    qDebug() << A[1];
    qDebug() << A[2];
    qDebug() << A[3];
    qDebug() << A[4];
    qDebug() << A[5];

    //Acá no sabemos los index que conforman el array, se deja abierto
    //y permitimos que se añadan nuevos
    //int B[] = {5, 8, 60, 80, -8, 40};
    //acá está tipada incluso la cantidad de index que conforman
    //el array

    //Acá con For
    int B[6] = {5, 8, 60, 80, -8, 40};

    for(int i = 0; i <= 5; ++i){
        qDebug() << B[i];
    }

    //Ahora con while
    int i = 0;
    while(i <= 5){
        qDebug() << B[i];
        ++i;
    }

    //Ahora con Do While
    int k = 0;
    do{
        qDebug() << B[k];
        ++k;
    }
    while(k <= 5);

    //acá podemos tambien hacer arreglos de caracteres
    char C[5] = {'a', 'e', 'i', 'o', 'u'};

    for(int i = 0; i <= 5; ++i){
        qDebug() << C[i];
    }

    //con los arreglos de caracteres, son considerados strings o cadenas de caracteres.
    //para conseguir imprimir la cadena de string, habría que agregar el '\0' para que sea reconocido como una cadena de caracteres.
    //Y acá podemos imprimir directamente todo como una palabra, solo imprimiendod la variable sin los index
    char D[6] = {'a', 'e', 'i', 'o', 'u', '\0'};
    qDebug() << D;

    return a.exec();
}
