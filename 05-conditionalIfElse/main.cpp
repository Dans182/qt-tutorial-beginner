#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    if ( 5 > 1){
        qDebug () << "5 es mayor que 1";
    }
    else {
        qDebug () << "1 es menor que 5";
    }

    return a.exec();
}
