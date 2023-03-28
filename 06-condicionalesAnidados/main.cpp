#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    if (4 < 1){
        qDebug() << "primer if se cumple";
        if (6 > 10){
            qDebug() << "segundo if se cumple";
            if (10 == 10){
                qDebug() << "tercer if se cumple";
            }
        }
        else {
            qDebug() << "segundo if no se cumple";
            if (100 <= 90){

            }
        }
    }
    else {
        qDebug() << "el primer if no se cumple";
        if (80 >= 20){
            qDebug() << "aqui se cumple";
        }

    }
    return a.exec();
}
