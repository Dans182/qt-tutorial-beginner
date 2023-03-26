#include <QCoreApplication>
#include <QDebug>
//con esta averiguamos los límites de los tipos de datos.
#include <limits>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //las variables son espacios en la memoria de la pc
    //para almacenar info
    //es un lenguaje tipado


    int numeroEntero = 10;

    double numeroConDecimales = 3.1416;

    //llevan letra al final y requieren la letra "f" para indicar que es del tipo float
    float numeroDecimalConMenosPrecision = 12.5f;

    //Char: un solo caracter. Se usa comillas simples
    char inicial = 'C';

    //QChar es una clase de QT. Un tipo de dato de QT propiamente
    //un solo caracter. Se usa comillas simples
    QChar caracter = 'D';

    //cadena de strings
    //el std quiere decir que ese "string" forma parte de la biblioteca "standard" de C++
    std::string cadenaDeCaracteres = "Hola mundo!";

    //QString es una clase de QT, QString forma parte del framework QT. Un tipo de dato de QT propiamente
    //cadena de strings
    QString cadenaDeCaracteres2 = "Bienvenidos al curso";

    //variables de numeros enteros, sin signos. Siempre deben ser positivos.
    //en cambio int, permite numeros negativos.
    unsigned numeroPositivo = 8;

    //variables de numeros enteros,  pero mas pequeños. Tiene un límite.
    //el limite es desde -32768 hasta 32767.
    short numeroPequeño = 59;

    //variables de numeros enteros,  pero grandes. long es equivalente a int, serían lo mismo.
    long numeroGrande = 5956566;

    //variables de numeros enteros,  pero todavía mas grandes.
    long long numeroGrandeGrande = 59454545646646;

    /*int, double, char, std, unsigned, short, long, long long y float son tipos de datos primitivos de C++*/

    //De esta manera averiguamos los límites numericos que permite el tipo de dato short
    //tanto el minimo, como el maximo y me lo imprime en consola, gracias a la importación
    //del QDebug y del "limits"
    qDebug() << std::numeric_limits<short>::min();
    qDebug() << std::numeric_limits<short>::max();
    qDebug() << std::numeric_limits<int>::min();
    qDebug() << std::numeric_limits<int>::max();
    qDebug() << std::numeric_limits<long>::min();
    qDebug() << std::numeric_limits<long>::max();
    qDebug() << std::numeric_limits<long long>::min();
    qDebug() << std::numeric_limits<long long>::max();
    return a.exec();
}
