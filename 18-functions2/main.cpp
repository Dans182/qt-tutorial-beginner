#include <QCoreApplication>
#include <QDebug>

//esta es la manera de definir las funciones DEBAJO de la función main.
//en este caso, defino los prototipos primero (o sea, declaro las funciones primero y despues las defino)
//en la definición de prototipos puedo definir los parametros o simplemente indicar el tipo de dato de los parametros.
//pero no es necesario indicar el nombre del parámetro (ejemplo, lineas 11 y 12 vs 13)
//pero en las definiciones de las funciones si deben estar los nombres de esos parámetros
void hola();
int dame2();
char dameArroba();
void imprimeNumero(int numero);
int multiplicaPorDos(int numero);
int multiplicaDosNumeros(int, int);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    hola();
    qDebug() << dame2();
    qDebug() << dameArroba();
    imprimeNumero(18);
    qDebug() << multiplicaPorDos(20);
    qDebug() << multiplicaDosNumeros(8, 8);

    return a.exec();
}
void hola(){
    qDebug() << "Hola mundo!";
}

int dame2(){
    return 2;
}

char dameArroba(){
    return'@';
}

void imprimeNumero(int numero){
    qDebug() << numero;
}

int multiplicaPorDos(int numero){
    return numero * 8;
}

int multiplicaDosNumeros(int numero1, int numero2){
    return numero1 * numero2;
}
