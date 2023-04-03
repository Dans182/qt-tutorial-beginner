#include <QCoreApplication>
#include <QDebug>

namespace miEspacio{
struct Punto2D{
    double x;
    double y;
};
void imprimePunto2D(const Punto2D &p){
    qDebug() << p.x << "," << p.y;
};

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
