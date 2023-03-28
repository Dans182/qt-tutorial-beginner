#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // >, <, >=, <=, ==, !=, &&, ||, !

    int number1 = 9;
    int number2 = 7;

    if (number1 > number2){
        qDebug() << number1 << "es mayor que " << number2;
    }
    else {
        qDebug() << number1 << "es menor que " << number2;
    }

    if (number1 < number2){
        qDebug() << number1 << "es menor que " << number2;
    }
    else {
        qDebug() << number1 << "es mayor que " << number2;
    }

    if (number1 == 9 && number2 == 7){
        //el operador && obliga a que ambas condiciones se cumplan y sean true
        qDebug() << "la condición se cumple";
    }
    else {
        qDebug() << "la condición no se cumple";
    }

    if (number1 == 9 || number2 == 50){
        //el operador || obliga a que una de las condiciones se cumpla y sea true
        qDebug() << "la condición se cumple";
    }
    else {
        qDebug() << "la condición no se cumple";
    }

    if (number1 != 10){
        //el operador ! es una negación. Simplemente hago una pregunta en negativo
        qDebug() << "si es verdad que no se cumple";
    }
    else {
        qDebug() << "es falso que no se cumple";
    }

    return a.exec();
}
