#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int n) {
    int i, j, menor;

    for (i = 0; i < n - 1; i++) {

        menor = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[menor]) {
                menor = j;
            }
        }

        int temp = arr[menor];
        arr[menor] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n, metodo;

    printf("Selecciona metodo a utilizar:\n 1-Burbuja\n 2-insersion \n 3-seleccion \n 4-salir \n");
    scanf("%d", &metodo);

    if (metodo == 4) {
        printf("Procedimiento cancelado.\n");
        return 0; // Salir del programa
    }

    // Solicitar al usuario el tamaño del vector
    printf("Ingrese la cantidad de elementos en el vector: ");
    scanf("%d", &n);

    int vector[n];

    // Solicitar al usuario los elementos del vector
    printf("Ingrese los elementos del vector:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    // menú de ordenamiento
    if (metodo == 1) {
        bubbleSort(vector, n);
    } else if (metodo == 2) {
        insertionSort(vector, n);
    } else if (metodo == 3) {
        selectionSort(vector, n);
    } else {
        printf("Opción no válida.\n");
        return 1;
    }

    printf("\nVector ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d \n", vector[i]);
    }
    printf("Fue realizado con el metodo: %d ", metodo);

    return 0;
}



