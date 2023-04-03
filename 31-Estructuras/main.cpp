#include <QCoreApplication>
#include <QDebug>

//para no tener que hacer 6 variables, para representar este plano cartesiano, puedo hacer uso de las estructuras.
//double x1 = 1.0;
//double y1 = 3.0;
//double x2 = -5.1;
//double y2 = -9.9;
//double x3 = x1 + x2;
//double y3 = y1 + y2;
//en vez de hacer 6 declaraciones de variables, etc. Solo efectué 3.

struct Punto2D{
    double x;
    double y;
};

struct Persona{
    int edad;
    double salario;
    QString nombre;
    Punto2D posicion; //aca tenemos una estructura dentro de otra. (array dentro de otro)
};

void imprimePunto(const Punto2D &p){
    qDebug() << p.x << "," << p.y;
};

//tambien se pueden pasar estructuras por argumentos en funciones
//en esta primera, recibe una persona
//recibe "persona" pero recibe una copia de la variable original, esta consume mas espacio, hace copias innecesarias en la memoria
//es por esto que se recomienta que los argumentos se pasen por punteros (la memoria) o por referencia
//void imprimePersona(Persona persona){
//    qDebug() << persona.nombre;
//};

//en esta segunda, recibe un puntero
//en esta recibe "persona" pero como puntero, por lo que recibe es una dirección de memoria de esa variable original, esta ocupa menos
//espacio en memoria. Es mas rapida de utilizar.
void imprimePersona(Persona *persona){
    qDebug() << persona->nombre; //en los punteros usamos un pointer para referenciar. Flechita
    qDebug() << persona->edad;
    qDebug() << persona->salario;
    imprimePunto(persona->posicion);
};

//pasamos estructuras por argumentos en funciones, en este caso, haciendo uso de referencias.
void imprimePersona(const Persona &persona){ //se recomienda que si en una función no vas a modificar los valores internos de la estructura
    //que hagas uso de "const", indicandole al compilador que no quieres modificar nada, y esto hace que el programa se compile
    //más rápido
    qDebug() << persona.nombre; //en las referencias usamos en punto para referenciar
    qDebug() << persona.edad;
    qDebug() << persona.salario;
    qDebug() << persona.posicion.x;
    qDebug() << persona.posicion.y;
};

//podemos devolver estructuras como retorno de una función.
//forma de crear una funcion, que retorne una estructura
Persona personaNueva(int edad, double salario, const QString &nombre, const Punto2D &posicion){
    Persona p = {edad, salario, nombre, posicion};
    return p;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Punto2D p1 = {1.0, 3.0};
    Punto2D p2 = {-5.1, -9.9};
    Punto2D p3 = {p1.x + p2.x, p1.y + p2.y};

    qDebug() << "(" << p3.x << "," << p3.y << ")";
    //    qDebug() << "(" << x3 << "," << y3 << ")";
    qDebug() << "\n";

    //Podemos rellenarla en forma de inicialización, como un array
    Persona juan = { 28, 1000.0, "Juan", {0.0, 0.00}}; //aca identifico con el nombre "juan" al nombre de esa estructura.
    qDebug() << juan.nombre;//de esa manera accedo a los valores de la estructura
    qDebug() << juan.edad;
    qDebug() << juan.salario;
    qDebug() << juan.posicion.x << "," << juan.posicion.y;

    qDebug() << "\n";

    //Podemos rellenarla en forma independiente
    Persona ana;
    ana.nombre = "Ana";
    ana.edad = 25;
    ana.salario = 500.0;
    ana.posicion.x = 1.0;
    ana.posicion.y = 1.0;
    //e imprimirla individualmente
    qDebug() << ana.nombre;
    qDebug() << ana.edad;
    qDebug() << ana.salario;
    qDebug() << ana.posicion.x << "," << ana.posicion.y;

    qDebug() << "\n";

    imprimePersona(ana); //puntero

    qDebug() << "\n";

    imprimePersona(&juan); //referencia

    Persona pedro = personaNueva(20, 100.0, "pedro", p1);

    return a.exec();
}
