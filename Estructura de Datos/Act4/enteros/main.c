#include <stdio.h>

int main() {
    int numeros[10];

    printf("Ingresa 10 numeros enteros:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    int max = numeros[0];

    for (int i = 1; i < 10; i++) {
        if (numeros[i] > max) {
            max = numeros[i];
        }
    }

    printf("El numero mas grande es: %d\n", max);

    return 0;
}

