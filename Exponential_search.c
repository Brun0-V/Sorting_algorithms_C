#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    return -1;
}

int exponentialSearch(int arr[], int n, int x) {
    if (arr[0] == x)
        return 0;

    int i = 1;
    while (i < n && arr[i] <= x)
        i *= 2;

    return binarySearch(arr, i / 2, (i < n) ? i : n - 1, x);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30;

    int result = exponentialSearch(arr, n, x);

    if (result == -1)
        printf("El elemento no se encuentra en el array.\n");
    else
        printf("El elemento se encuentra en la posición %d del array.\n", result);

    return 0;
}
