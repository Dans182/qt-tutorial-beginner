#include <QCoreApplication>
#include <QDebug>

struct Persona{
    QString nombre;
    int edad;
};

void imprimePersona(const Persona *persona){
    qDebug() << persona->nombre << persona->edad;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //la memoria requiere el uso de punteros obligatoriamente

    int numero = 10; //Este numero está guardado en la pila de la memoria. La pila es el stack
    qDebug() << numero << &numero; //imprimimos el valor de la variable y la ubicación en memoria de esta
    qDebug() << "\n";

    //mientras que una variable en la memoria dinamica se almacena en el heap.
    //el heap permite un almacenamiento mucho mas grande
    int *puntero = new int(10);
    //puede tambien asignarse de esta manera
    /*
     *int *puntero = new int;
      *puntero = 10;
     */

    qDebug() << *puntero << puntero;//imprimimos el valor de la variable y la ubicación en memoria de esta
    delete puntero; //siempre que hacemos uso de un new para crear un nuevo valor, debemos crear un delete
    qDebug() << "\n";
    //para liberar la memoria utilizada. No destruye la variable puntero, sino que destruye el almacenamiento que hizo el new
    //al guardar el this. Hay se evitan que existen fugas de memorias.
    //obligatoriamente por cada new, debe haber un delete

    //podemos declarar arreglos que se guarden en heap
    int *array = new int[5];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    for(int i = 0; i < 5; i++){
        qDebug() << array[i];
    }
    delete[] array; //como es un arreglo, habría que poner delete[], para eliminar la memoria dinamica del array dinámico
    qDebug() << "\n";

    Persona *ricardo = new Persona;
    ricardo->nombre = "Ricardo";
    ricardo->edad = 20;

    Persona *eva = new Persona;
    eva->nombre = "Eva";
    eva->edad = 29;

    imprimePersona(ricardo);
    qDebug() << "\n";
    imprimePersona(eva);
    delete ricardo;
    delete eva;

    return a.exec();
}
