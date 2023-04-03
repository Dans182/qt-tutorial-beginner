#include <QCoreApplication>
#include <QDebug>

struct Punto2D{
    double x;
    double y;

    void inicializa(double a, double b);
    void imprime() const; //se crea const, porque no modifica, solo imprime.
    Punto2D suma(const Punto2D &p) const; //funcion que devuelve un punto en 2D
};

void Punto2D::inicializa(double a, double b){
    x = a;
    y = b;
};

void Punto2D::imprime() const{
    qDebug() << "x = " << x << "y = " << y;
};

Punto2D Punto2D::suma(const Punto2D &p) const{
    Punto2D resultado;
    resultado.x = x + p.x;
    resultado.y = y + p.y;
    return resultado;
};

//cuando una función está dentro de una estructura, ya no se llama función, se llaman métodos.

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Punto2D p1 = {1.1, 1.2};
    Punto2D p2;
    p2.inicializa(2.3, 2.4);

    p1.imprime();
    p2.imprime();

    Punto2D p3 = p1.suma(p2);
    p3.imprime();

    return a.exec();
}
