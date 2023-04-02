#include <QCoreApplication>
#include <QDebug>

//con la palabra enum, creamos enumeraciones
enum{
    //Aca estoy declarando constantes, que lo que hace es crearme el valor de estas, en numeros enteros enumeradas en orden creciente.
    //empezando por el 0.
    //Sin embargo, puedo asignarle el valor a una de estas variables, y me aceptará esto y en las siguientes variables, lo incrementará
    //de manera creciente, a partir de justamente la anterior.
    BLANCO,
    NEGRO,
    AZUL,
    ROJO,
    VERDE = 200,
    AMARILLO,
    MARRON,
    GRIS
};
//se utilizan para tomar decisiones en el programa y que quede claro lo que estamos haciendo.
//sirven para evitarnos tener el valor numerico que vamos colocando en el código

enum formaDeTratarArray{ //Les podemos poner un nombre. Solo servirá para identificar la enumeración. Es un distintivo. Puede no usarse
    NORMAL,
    INVERSA,
};

void imprimeArray(int A[], int size, int forma){
    if (forma == NORMAL){//puedo hacer uso de las enumeraciones para no tener que indicar explícitamente un número entero.
        //de esta manera, hago uso de las enumeraciones.
        //imprime el arregle en creciente
        for(int i = 0; i < size; i++){
            qDebug() << A[i];
        }
    }
    else if(forma == INVERSA){
        //imprime el arregle en decreciente
        for(int i = size - 1; i >= 0; i--){
            qDebug() << A[i];
        }
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //acá mando a imprimir el valor de cada una de esas constantes.
    qDebug() << BLANCO;
    qDebug() << NEGRO;
    qDebug() << AZUL;
    qDebug() << ROJO;
    qDebug() << VERDE;
    qDebug() << AMARILLO;
    qDebug() << MARRON;
    qDebug() << GRIS;
    qDebug() << "\n";
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A)/sizeof(int);

    imprimeArray(A, size, 0);
    qDebug() << "\n";
    imprimeArray(A, size, INVERSA);
    return a.exec();
}
