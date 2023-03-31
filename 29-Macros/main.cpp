#include <QCoreApplication>
#include <QDebug>

#define INCREMENTA(arg)(++arg) // Se definen. Son directivas de preprocesador. Este macro recibe un parametro (arg)
#define IMPRIME_HOLA qDebug() << "hola" //los macros tambien pueden NO tener parámetros. En este caso, tiene una instrucción
#define INCREMENTA3(a, b, c)(++a), (++b), (++c)
#define INCREMENTA4(d, e, f)(++d), \
                            (++e), \
                            (++f) //hace lo mismo que el anterior, pero divido el macro en varios saltos de línea

//Los macros son muy parecidas a funciones.
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int numero = 10;
    INCREMENTA(numero);
    //INCREMENTA(arg)(++arg) Acá la variable numero, aumentará a 11 por que le indicas que INCREMENTA(numero) numero++
    //INCREMENTA(arg)(++arg) == (++numero)
    INCREMENTA(numero);
    qDebug() << numero;
    IMPRIME_HOLA;

    int x = 1;
    int y = 2;
    int z = 3;

    INCREMENTA3(x, y, z);
    qDebug() << x;
    qDebug() << y;
    qDebug() << z;
    INCREMENTA4(x, y, z);

    return a.exec();
}
