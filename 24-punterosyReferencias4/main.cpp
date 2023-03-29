#include <QCoreApplication>
#include <QDebug>

//aca estamos pasando un array, por argumento a una función
void imprimeArray(int array[], int tamaño){

    for (int i = 0; i < tamaño; ++i){
        qDebug() << array[i];
    }

}

//pero realmente este array es un puntero. Podemos modificarlo de la siguiente manera y funciona igual
void imprimeArray2(int *array, int tamaño){

    for (int i = 0; i < tamaño; ++i){
        qDebug() << array[i];
    }

}

void imprimeArray3(int *array, int tamaño){

    for (int i = 0; i < tamaño; ++i){
        qDebug() << array[i];
    }

}

//el nombre de un array, por defecto, ya es un puntero al primer elemento de un array

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int array[] = {1, 2, 3, 4, 5};
    imprimeArray(array, sizeof(array)/sizeof(int));
    imprimeArray2(array, sizeof(array)/sizeof(int));
    //Acá automáticamente ya apunta al primer elemento del array
    imprimeArray3(&array[0], sizeof(array)/sizeof(int));

    return a.exec();
}
