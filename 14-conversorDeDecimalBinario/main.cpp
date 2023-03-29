#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int i, j, n;
    int A [1000];
    n = 10; //variable del número decimal (que transformaremos a binario)

    i = 0;
    while (n >= 1) {
        A[i] = n % 2;
        n = n / 2;
        i = i + 1;
    }

    for (j = i - 1; j >= 0; j = j - 1){
        qDebug() << A[j];
    }

    return a.exec();
}
