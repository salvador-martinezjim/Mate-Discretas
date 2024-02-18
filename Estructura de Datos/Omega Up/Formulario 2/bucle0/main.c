#include <stdio.h>

int main() {
    int numero, suma = 0;

    do {
        scanf("%d", &numero);
        suma += numero;
    } while (numero != 0);

    printf("%d", suma);