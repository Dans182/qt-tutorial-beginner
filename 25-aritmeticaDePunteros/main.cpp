#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int size = 10;
    int array[size]; //tengo un array, sin valores determinados dentro, pero indicamos que habrá 10 elementos dentro.

    for (int i = 0; i < 10; ++i){//aca indico que el valor de cada elemento que esté dentro del array, será el valor que tenga i en cada iteración
        array[i] = i; //
    }

    for (int i = 0; i < 10; ++i){
        qDebug() << "iteración:" << i << "valor de cada elemento del array:" << array[i];

    }
    qDebug() << " ";
    //la forma mostrada anterior, nos sirvio para mostrar que usamos el mismo array para rellenarlo de valores.

    /******************************************************************************************************************************************************/

    //usamos punteros para lo mismo.
    //acá usamos el puntero para exactamente lo mismo. Modificar los elementos de un array
    int *arrayApuntado = array;

    for (int i = 0; i < 10; ++i){
        arrayApuntado[i] = i; //
    }

    for (int i = 0; i < 10; ++i){
        qDebug() << "iteración:" << i << "valor de cada elemento del array:" << arrayApuntado[i];
    }
    qDebug() << " ";
    /******************************************************************************************************************************************************/

    //en cambio la aritmética 28 - Ordenamiento de la librería estándarde punteros podemos usarla para lo mismo.

    int *puntero = array;

    for (int i = 0; i < 10; ++i){
        *(puntero + i) = i; //la aritmetica de punteros consiste en que
        //si tu tienes un puntero y le sumas un valor entero, lo que haces es aumentar el valor del lugar a donde apunta.

    }
    array[7] = 10;//forma tradicional para modificar elementos de array
    puntero[8] = 20; //hago esto para modificar el elemento 8 del array. Forma tradicional con punteros.
    *(puntero + 9) = 40; //uso aritmética de punteros para modificar el elemento 9 del array

    for (int i = 0; i < 10; ++i){
        qDebug() << "iteración:" << i << "valor de cada elemento del array:" << puntero[i];
    }
    qDebug() << " ";

    qDebug() << array; // segmento de memoria de la variable array

    //un puntero apunta es al segmento de memoria de una variable.

    return a.exec();
}
