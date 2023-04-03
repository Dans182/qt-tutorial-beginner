#include <QCoreApplication>
#include <QDebug>

//el espacio de nombres puede tener cualquier cosa en su interior.
//en este ejemplo tiene una estructura y una funcion
namespace miEspacio{

const int size = 10; //esto debe ser una constante, si es variable, da error.
int numeros[size];

void rellenarArray(){
    for(int i = 0; i < size; i++){
        numeros[i] = i;
    }
};

void imprimirArray(){
    for(int i = 0; i < size; i++){
        qDebug() << numeros[i];
    }
}

struct Punto2D{
    double x;
    double y;
};

void imprimePunto2D(const Punto2D &p){
    qDebug() << p.x << "," << p.y;
};

}

//si quiero evitar usar la invocación miEspacio en cada función y demás.
//puedo poner como en la línea de abajo
//using namespace miEspacio;
//y con esto, indico que usaré todo lo que hay dentro del espacio de nombres miEspacio.
//de esta manera, uso todo lo de miEspacio y no me hace invocar el "miEspacio" en cada función o estructura.
//paso de esto -> miEspacio::Punto2D punto1; a -> Punto2D punto1;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //en el programa quiero hacer uso del Punto2D. Para eso tengo que:

    miEspacio::Punto2D punto1;
    miEspacio::Punto2D punto2;
    punto1.x = 0.0;
    punto1.y = 0.0;
    punto2.x = 1.0;
    punto2.y = 1.0;

    miEspacio::imprimePunto2D(punto1);
    miEspacio::imprimePunto2D(punto2);

    qDebug() << "\n";
    //los espacios de nombre sirven para agrupar todo tipo de cosas, estructuras, funciones y variables globales.

    miEspacio::rellenarArray();
    miEspacio::imprimirArray();

    return a.exec();
}
