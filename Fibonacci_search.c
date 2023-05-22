#include <stdio.h>

int min(int a, int b) {
    return (a <= b) ? a : b;
}

int fibonacciSearch(int arr[], int n, int x) {
    int fib2 = 0;
    int fib1 = 1;
    int fib = fib2 + fib1;

    while (fib < n) {
        fib2 = fib1;
        fib1 = fib;
        fib = fib2 + fib1;
    }

    int offset = -1;

    while (fib > 1) {
        int i = min(offset + fib2, n - 1);

        if (arr[i] < x) {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        }
        else if (arr[i] > x) {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        }
        else {
            return i;
        }
    }

    if (fib1 && arr[offset + 1] == x) {
        return offset + 1;
    }

    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    int result = fibonacciSearch(arr, n, x);

    if (result == -1) {
        printf("El elemento no se encuentra en el array.\n");
    }
    else {
        printf("El elemento se encuentra en la posición %d del array.\n", result);
    }

    return 0;
}
