#include <QCoreApplication>
#include <QDebug>

void rellenarArray(int array[], int size){
    for(int i = 0; i < size; i++){ //haciendo un for es la forma que tenemos de recorrer el array
        array[i] = i; //aca lo que indico es que cada valor del array será igual al valor de la iteración
    }
};

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        qDebug() << array[i]; //y esta es la unica forma de imprimir los valores de un array, recorriendolo
    }
};

void sumarArray(int array[], int size, int sumar){
    for(int i = 0; i < size; i++){
        array[i] = array[i] + sumar;
    }
};

void rellenarArrayInvertido(int array[], int size){
    int x = 0;
    for(int i = size - 1; i >= 0; i--){
        array[i] = x;
        ++x;
    }
};

void sumarArrays(int array1[], int array2[], int resultado[], int size){
    for(int i = 0; i < size; ++i){
        resultado[i] = array1[i] + array2[i];
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int size = 100;
    int array[size];

    rellenarArray(array, size);
    qDebug() << "array1 rellenado";
    printArray(array, size);
    qDebug() << "\n\n";

    int sumar = 10;

    sumarArray(array, size, sumar);
    qDebug() << "array1 con suma de 10 en cada elemento";
    printArray(array, size);
    qDebug() << "\n\n";

    int array2[size];
    rellenarArrayInvertido(array2, size);
    qDebug() << "array2 rellenado, de manera decreciente";
    printArray(array2, size);
    qDebug() << "\n\n";

    int array3[size];
    qDebug() << "array3, que consiste en la suma de array con el array2";
    sumarArrays(array, array2, array3, size);
    printArray(array3, size);

    return a.exec();
}
