#include <QCoreApplication>
#include <QDebug>

struct Punto2D{
    double x;
    double y;

    void inicializa(double a, double b);
    void imprime() const;
};

void Punto2D::inicializa(double x, double y){ //aca usamos el this, porque si no lo tuviera, entraría en conflicto. Ya que tengo las variables
    //"x" y "y" como variables y parámetros. Poniendo el this, identifico que son las variables de la estructura y no parámetros.
    //puedo tambien declarar los parámetros con otras letras. acá hay que distinguir porque sino entra en conflicto.
    this->x = x;
    this->y = y;
    imprime();
    this->imprime();//aca puede usarse el puntero, pero igualmente no haría falta porque no hay confl
}

void Punto2D::imprime() const {
    qDebug() << x << y;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Punto2D primeraEstructura;
    primeraEstructura.inicializa(1.0, 2.0);
    primeraEstructura.imprime();

    return a.exec();
}
