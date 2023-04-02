#include <QCoreApplication>

//Libreria para imprimir por consola información
#include <QDebug>

//Nuestra app consta de una función principal llamada main

int main(int argc, char *argv[])
{
    //QCoreApplication representa la app que estamos programando
    //que recibe como parametros las dos variables (argc y argvq) que vienen del sistema
    QCoreApplication a(argc, argv);

    //Dentro declaramos la función de nuestra app.
    //siempre hay ";" despues de las instrucciones.
    //en las funciones y/o llaves no hay ";"
    //en los includes tampoco, porque son directivas del preprocesador
    qDebug() << "Primer programa en consola con QT y C++";
    qDebug() << "Hola mundo";
    qDebug() << "Bienvenidos";

    //el resultado del programa se envia al sistema operativo
    //exec es para ejecutar la app y que se mantenga ejecutado.
    return a.exec();
}

/*main = principal
int = numeros
char = letras (caracter) o números


Menu inferior izquierdo:
Primer botón:
Compilación
    Podemos compilar el programa en 3 modos:
    -Debug: Esto es para que cuando compilemos la app, se graben en el ejecutable
    información para debug, para encontrar errores en el programa
    -Profile: Es un intermedio entre debug y release.
    -Release: cuando esté terminada la app y listo para distribución se compila en modo release
    para liberación. Para que no pesen tanto
Segundo botón:
Ejecución

Tercer botón:
Ejecución con debug. Solo se puede usar si la compilación está en modo Debug

Cuarto botón:
Construcción
*/
