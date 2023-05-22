#include <stdio.h>
#include <math.h>

int min(int a, int b) {
    return (a <= b) ? a : b;
}

int jumpSearch(int arr[], int n, int x) {
    int step = sqrt(n);
    int prev = 0;
    
    while (arr[min(step, n) - 1] < x) {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    
    while (arr[prev] < x) {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    
    if (arr[prev] == x)
        return prev;
    
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30;

    int result = jumpSearch(arr, n, x);

    if (result == -1)
        printf("El elemento no se encuentra en el array.\n");
    else
        printf("El elemento se encuentra en la posición %d del array.\n", result);

    return 0;
}
