#include <QCoreApplication>
#include <QDebug>
#include <algorithm>//algoritmo de ordenación

bool funcionDeComparacion(int a, int b){
    return a < b; //función comparativa que ordenará de menor a mayor
}

void imprimirArreglo(int A[], int tam){
    qDebug() << A;//esto imprime el segmento de memoria donde está el array

    for(int i = 0; i < tam; ++i){
        qDebug() << A[i]; //función que recorre todo los elementos de un array y te los imprime. Es la forma de mostrar los elementos de un array
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int A[] = {1, -9, -20, 11, 0, 55, 900 }; //array
    int tam = sizeof(A) / sizeof(int); //te calcula siempre el tamaño del array.
    int *punteroAlInicio = &A[0]; //array inicial -> lo mismo, con aritmética de punteros int *punteroAlInicio = A + 0;
    int *punteroAlFinal = &A[tam - 1]; //de esta manera seleccionamos el ultimo elemento del array -> lo mismo, con aritmética de punteros int *punteroAlFinal = A + tam;

    //hacemos uso de la función estándard sort para ordenar los elementos del array

    imprimirArreglo(A, tam); //imprime el array, original
    qDebug() << "\n\n";

    std::sort(punteroAlInicio, punteroAlFinal, funcionDeComparacion); //función que al llegar a su lectura, ordena todo el array
    //std::sort(std::begin(A), std::end(A), funcionDeComparacion); -> exactamente lo mismo que en la linea anterior, pero usando begin y end
    imprimirArreglo(A, tam);//ya imprime el array ordenado.

    return a.exec();
}
