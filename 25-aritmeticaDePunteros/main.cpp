#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int size = 10;
    int array[size];

    for (int i = 0; i <= 10; ++i){
        qDebug() << array[i];
    }
    return a.exec();
}
