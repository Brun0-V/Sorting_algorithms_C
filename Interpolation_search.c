#include <stdio.h>

int interpolationSearch(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right && target >= array[left] && target <= array[right]) {
        if (left == right) {
            if (array[left] == target) {
                return left; // Índice donde se encuentra el número buscado
            }
            return -1; // Si no se encuentra el número en el array
        }
        
        int pos = left + ((target - array[left]) * (right - left)) / (array[right] - array[left]);
        
        if (array[pos] == target) {
            return pos; // Índice donde se encuentra el número buscado
        }
        
        if (array[pos] < target) {
            left = pos + 1;
        } else {
            right = pos - 1;
        }
    }
    
    return -1; // Si no se encuentra el número en el array
}

int main() {
    int array[30] = {12, 34, 45, 67, 89, 112, 156, 178, 199, 234, 256, 267, 289, 312, 334, 356, 378, 389, 401, 423, 445, 467, 489, 512, 534, 556, 578, 589, 601, 623};
    int target = 267;
    
    int result = interpolationSearch(array, 30, target);
    
    if (result == -1) {
        printf("El número %d no se encuentra en el array.\n", target);
    } else {
        printf("El número %d se encuentra en el índice %d del array.\n", target, result);
    }
    
    return 0;
}
