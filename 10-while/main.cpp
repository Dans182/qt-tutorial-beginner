#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int valor = 0;

    while (valor < 10) {
        qDebug() << valor;
        valor = valor + 1;
    }
    return a.exec();
}
