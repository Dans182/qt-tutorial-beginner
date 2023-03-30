#include <QCoreApplication>
#include <QDebug>

void imprimeNumero(int numero = 10){
    qDebug() << numero;
}

void imprimeCaracteres(char a = 'A', char b = 'B', char c = 'C'); //si declaro la función en dos partes, o sea, primero prototipo en esta línea y despues la defino.
                                                                    //los valores por defecto siempre tienen que ir en los prototipos y NO en las definiciones.

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    imprimeNumero();
    imprimeNumero(25);
    imprimeCaracteres();
    imprimeCaracteres('X', 'Y', 'Z');
    imprimeCaracteres('X');

    return a.exec();
}

void imprimeCaracteres(char a, char b, char c){
    qDebug() << a << b << c;
}
