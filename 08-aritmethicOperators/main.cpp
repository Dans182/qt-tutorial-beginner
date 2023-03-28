#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //operadores aritméticos: +, -, *, /, %
    //operadores combinados: +=, -=, *=, /=, %=
    //operadores de asignación: =

    int number1 = 10;
    int number2 = 15;
    int suma = number1 + number2;
    qDebug() << suma;

    number1 = 28;
    number2 = 25;
    int resta = number1 - number2;
    qDebug() << resta;

    number1 = 80;
    number2 = 25;
    int multiplicacion = number1 * number2;
    qDebug() << multiplicacion;

    //en la división el residuo se piede. Siempre te muestra número
    //entero y sin decimales.
    number1 = 100;
    number2 = 10;
    int division = number1 / number2;
    qDebug() << division;

    //me lo guarda en entero, porque la variable "division" es de
    //tipo int, o sea, entero y las variables number tmb.

    float number3 = 5.0f;
    float number4 = 2.0f;
    float division2 = number3 / number4;
    qDebug() << division2;
    //para guardar decimales, debemos cambiar el tipo de dato a float.

    //operador módulo nos da el residuo de una división
    number1 = 5;
    number2 = 2;
    int modulo = number1 % number2;
    qDebug() << modulo;

    number1 = 1;
    number2 = 2;
    number1 += number2;
    qDebug() << number1;

    number1 = 5;
    number2 = 1;
    number1 -= number2;
    qDebug() << number1;

    number1 = 8;
    number2 = 2;
    number1 *= number2;
    qDebug() << number1;

    number1 = 10;
    number2 = 5;
    number1 /= number2;
    qDebug() << number1;

    number1 = 10;
    number2 = 5;
    number1 %= number2;
    qDebug() << number1;

    return a.exec();
}
