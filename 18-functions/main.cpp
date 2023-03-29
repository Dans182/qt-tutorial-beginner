#include <QCoreApplication>
#include <QDebug>

//la función VOID es una función que no tiene "return"
//primero tipo de dato de retorno, nombre de la función y parametros si los tuviera.
//función void, sin retorno de dato
void hola(){
    qDebug() << "Hola mundo!";
}
//función con retorno de int
int dame2(){
    return 2;
}
//función con retorno de char
char dameArroba(){
    return'@';
}

//función sin retorno, pero con parámetros
void imprimeNumero(int numero){
    qDebug() << numero;
}

int multiplicaPorDos(int numero){
    return numero * 8;
}

int multiplicaDosNumeros(int numero1, int numero2){
    return numero1 * numero2;
}

//para utilizar estas funciones debemos declararlas antes de la funcion principal.
//si se pusieran por debajo, tendríamos que declarar los prototipos.18

//por defecto, contamos con la función main que es la que ejecuta el programa, es la principal.
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
