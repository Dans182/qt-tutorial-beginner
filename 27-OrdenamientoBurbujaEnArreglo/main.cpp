#include <QCoreApplication>
#include <QDebug>

void imprimeArray(int A[], int size){
    for(int i = 0; i < size; i++){
        qDebug() << A[i];
    }
}

void ordenaArregloBurbuja(int A[], int size){
int temp;
    for(int i = 0; i < size; i++){
        for (int j = i + 1; j < size; ++j) {
            if (A[j] < A[i]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int A[] = {6, 3, -2, 45, -93, 12, 533};
    int size = sizeof(A) / sizeof(int);

    imprimeArray(A, size);
    ordenaArregloBurbuja(A, size);
    qDebug() << "\n\n";
    imprimeArray(A, size);

    return a.exec();
}
