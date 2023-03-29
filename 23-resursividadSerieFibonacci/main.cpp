#include <QCoreApplication>
#include <QDebug>

//la recursividad consiste en una función que se llama así misma
//Acá hacemos la sucesión de fibonacci realizada con recursividad
int fib(int x){
    if (x == 0){
        return 0;
    }
    if(x == 1){
        return 1;
    }
    return fib(x - 1) + fib(x - 2);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    for(int i = 1; i <= 10; i++){
        qDebug() << fib(i);
    }

    return a.exec();
}
