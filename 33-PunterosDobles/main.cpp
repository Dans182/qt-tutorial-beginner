#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int numero1 = 10;
    int numero2 = 20;
    int *punteroSencillo = nullptr;
    int **punteroDoble = nullptr;

    qDebug() << "numero 1" << numero1 << &numero1;
    qDebug() << "numero 2" << numero2<< &numero2;
    qDebug() << "\n";

    punteroSencillo = &numero1;
    punteroDoble = &punteroSencillo; //el punteroDoble, apunta al puntero sencillo y el sencillo al numero1.

    qDebug() << "Puntero sencillo" << *punteroSencillo; //puntero sencillo accede al valor de la variable numero1, o sea, 10
    qDebug() << "Puntero doble memoria" << *punteroDoble; //puntero doble acá accede a la dirección de memoria del valor de la variable numero1, porque esta apunta a punterosencillo, que apunta a numero1
    qDebug() << "Puntero doble valor variable" << **punteroDoble; //puntero doble acá accede al valor de la variable numero1, porque esta apunta a punterosencillo, que apunta a numero1
    qDebug() << "\n";

    //podemos modificar el puntero doble
    //entonces el puntero sencillo se modifica automáticamente, porque fue modificado por el puntero doble.
    *punteroDoble = &numero2;
    qDebug() << "Puntero doble" << *punteroDoble;
    qDebug() << "Puntero doble" << **punteroDoble;
    qDebug() << "Puntero sencillo" << *punteroSencillo;

    //los punteros dobles son para modificar punteros sencillos
    //los punteros sencillos son para modificar variables

    return a.exec();
}
