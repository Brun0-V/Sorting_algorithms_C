#include <stdio.h>


int busqueda_lineal (int array[], int target, int size) {
    for (int i = 0; i < size; i++)  //Itera sobre todos los valores del array
        if (arr[i]==target) return i;   //Si encuentra el numero devuelve su posicion
    return -1;  //Si no lo encuentra devuelve -1
}

int main()
{
    int arr[] = {-1,0,1,2,3,4,5,6,7,8,9,10}, n = 12, X;
    while (1==1)
    {
        scanf("%d", &X);
        printf("%d\n", busqueda_lineal(arr, X, n));
    }
    return 0;
}
