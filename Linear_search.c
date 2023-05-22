#include <stdio.h>


int busqueda_lineal (int A[], int clave, int n)
{
    for(int i=0;i<n;i++)
        if (A[i]==clave) return i;
    return -1;
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