#include <stdio.h>

int interpolationSearch(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right && target >= array[left] && target <= array[right]) {
        if (left == right) {        //Implementacion por si el array tiene un unico valor
            if (array[left] == target)
                return left; // Índice donde se encuentra el número buscado
            return -1; // Si no se encuentra el número en el array
        }
        int pos = left + ((target - array[left]) * (right - left)) / (array[right] - array[left]);
        if (array[pos] == target)   //Si la posicion es el numero buscado
            return pos; // Índice donde se encuentra el número buscado
        if (array[pos] < target)    //Si la posicion es menor al numero buscado
            left = pos + 1;
        else
            right = pos - 1;        //Si la posicion es mayor al numero buscado
    }
    
    return -1; // Si no se encuentra el número en el array
}

int main() {
    int Array[30] = {12, 34, 45, 67, 89, 112, 156, 178, 199, 234, 256, 267, 289, 312, 334, 356, 378, 389, 401, 423, 445, 467, 489, 512, 534, 556, 578, 589, 601, 623};
    int Target = 34;

    int Arrsize = sizeof(Array) / 4;

    int result = interpolationSearch(Array, Arrsize, Target);
    
    (result == -1) ? printf("El numero %d no se encuentra en el array.\n", Target) : printf("El numero %d se encuentra en el indice %d del array.\n", Target, result);

    
    return 0;
}
