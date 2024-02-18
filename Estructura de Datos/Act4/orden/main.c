#include <stdio.h>

int main() {
    int numeros[5];

    printf("Ingrese 5 numeros reales:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Numeros en orden inverso:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}

