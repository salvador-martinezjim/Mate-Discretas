#include <stdio.h>

int main() {
    int numeros[4];
    int suma = 0;

    printf("Ingrese 4 numeros:\n");

    for (int i = 0; i < 4; i++) {
        scanf("%d", &numeros[i]);
        suma += numeros[i];
    }

    double media = suma / 4;

    printf("Media: %.2lf\n", media);

    printf("Numeros ingresados: ");
    for (int i = 0; i < 4; i++) {
        printf("%.2lf ", numeros[i]);
    }

    return 0;
}

