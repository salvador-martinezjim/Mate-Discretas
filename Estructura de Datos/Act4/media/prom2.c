#include <stdio.h>

int dos() {
    double numeros[5];

    printf("Ingrese 5 n�meros reales:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%lf", &numeros[i]);
    }

    printf("N�meros en orden inverso:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%.2lf\n", numeros[i]);
    }

    return 0;
}

