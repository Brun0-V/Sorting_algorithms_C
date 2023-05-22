#include <stdio.h>

int interpolationSearch(int arr[], int n, int x) {
    int low = 0, high = (n - 1);
    while (low <= high && x >= arr[low] && x <= arr[high]) {
        if (low == high) {
            if (arr[low] == x)
                return low;
            return -1;
        }
        int pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (x - arr[low]));
        if (arr[pos] == x)
            return pos;
        
        if (arr[pos] < x)
            low = pos + 1;
        else
            high = pos - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30;
    int result = interpolationSearch(arr, n, x);
    if (result == -1)
        printf("El elemento no se encuentra en el array.\n");
    else
        printf("El elemento se encuentra en la posición %d del array.\n", result);
    return 0;
}