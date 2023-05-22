#include <stdio.h>

int busqueda_binaria(int A[], int NumaBuscar, int Alenght)
{
    int izq = 1, medio, der = Alenght;
    A[0] = NumaBuscar;
    do
    {
        medio = (izq + der) / 2;
        printf("Medio: %d   Izq: %d   Der: %d\n", medio, izq, der);
        if (izq > der)
            medio = 0;
        else if (A [medio] < NumaBuscar)
            izq = medio + 1;
        else
            der = medio - 1;
    } while (A[medio] != NumaBuscar);
    return medio;
}

int main()
{
    int arr[] = {-1,0,1,2,3,4,5,6,7,8,9,10}, n = 12, X;
    while (1==1)
    {
        scanf("%d", &X);
        printf("%d\n", busqueda_binaria(arr, X, n));
    }
    return 0;
}