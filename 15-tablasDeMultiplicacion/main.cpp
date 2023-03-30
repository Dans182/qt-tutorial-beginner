#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    for(int x = 1; x <= 10; ++x){
        for (int y = 1; y <= 10; ++y){
            int R = x * y;
            qDebug() << x << " x " << y << "=" << R;
        }
        qDebug() << " ";
    }

    return a.exec();
}
