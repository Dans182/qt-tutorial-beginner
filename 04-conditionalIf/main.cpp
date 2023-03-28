#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int v = 10;
    int w = 20;
    int x = 30;
    int y = 40;
    int z = 50;

    if(v < w){
        if (x < y){
            if (y < z){
                qDebug() << "Hola";
            }
        }
    }
    //en el if de arriba, un condicional anidado, exige que se
    //cumplan las tres condiciones para que se imprima el mensaje

    return a.exec();
}
