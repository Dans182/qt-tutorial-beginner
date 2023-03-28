#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int number = 8;

    //El break es necesario, porque hace que se rompa la ejecución
    //del código y continue al caso siguiente

    switch (number){
    case 1:
    {
        qDebug() << "1. lunes";
        break;
    }
    case 2:{
        qDebug() << "2. martes";
        break;
    }
    case 3:{
        qDebug() << "3. miércoles";
        break;
    }
    case 4:{
        qDebug() << "4. jueves";
        break;
    }
    case 5:{
        qDebug() << "5. viernes";
        break;
    }
        //si quiero indicar varias posibilidades es una linea
        //ejemplo, reconozca la letra "a" en mayúsculas y
        //minúsculas, puedo hacer como se muestra a continuación
    case 6: case 16:{
        qDebug() << "6. sábado";
        break;
    }
    case 7:{
        qDebug() << "7. domingo";
        break;
    }
    default:
    {
        qDebug() << "Ese día de la semana no existe" ;
        break;
    }
    }

    return a.exec();
}
