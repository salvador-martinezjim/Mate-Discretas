#include <stdio.h>

int main() {
    int numeros[10];
    int suma = 0;

    printf("Ingresa 10 numeros:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        suma += numeros[i];
    }

    int media = suma / 10;

    printf("Media: %.2lf\n", media);

    printf("Numeros que estan por encima de la media:\n");
    for (int i = 0; i < 10; i++) {
        if (numeros[i] > media) {
            printf("%.2lf\n", numeros[i]);
        }
    }

    return 0;
}

