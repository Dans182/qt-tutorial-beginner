#include <QCoreApplication>
#include <QDebug>

//variable global es aquella que esta disponible a lo largo de todo el programa.
//pueden ser array globales, estructuras, clases, etc...
int numero = 10;
int array[20];

struct Punto2D{
    double x;
    double y;
} puntoGlobal; //acá creo una función dentro de la estructura, que accederá y manipulara los datos de la misma estructura

Punto2D punto1;

void inicializarPunto1(){
  punto1.x =1.0;
  punto1.y =1.0;
};

void muestraPunto1(){
    qDebug() << punto1.x << punto1.y;
};

void inicializarPuntoGlobal(){
    puntoGlobal.x = 0.0;
    puntoGlobal.y = 0.0;
};

void muestraPuntoGlobal(){
    qDebug() << puntoGlobal.x << puntoGlobal.y;
};

void muestraNumero(){
    qDebug() << numero;
};

void cambiaNumero(int valor){
    numero = valor;
};

void llenarArray(){
    for(int i = 0; i < 20; i++){
        array[i] = i;
    }
};

void imprimeArray(){
    for(int i = 0; i < 20; i++){
        qDebug() << array[i];;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    muestraNumero();
    cambiaNumero(25);
    muestraNumero();

    qDebug() << "\n";
    llenarArray();
    imprimeArray();
    qDebug() << "\n";

    inicializarPuntoGlobal();
    muestraPuntoGlobal();
    qDebug() << "\n";

    inicializarPunto1();
    muestraPunto1();
    Punto2D punto2 = {2.0, 2.0};
    Punto2D punto3;
    punto3.x = 3.0;
    punto3.y = 3.0;
    qDebug() << punto2.x << punto2.y;
    qDebug() << punto3.x << punto3.y;

    return a.exec();
}
