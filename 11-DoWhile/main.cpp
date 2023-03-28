#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int valor = 0;

    do {
        //las instrucciones de linea 12 y 13 se ejecutan al menos
        //una vez, hasta llegar a la condicion verificadora
        //la condición siempre se ejecutará así no se cumpliera.
        qDebug() << valor;
        valor = valor + 1;
    }
    while (valor < 10);

    return a.exec();
}
