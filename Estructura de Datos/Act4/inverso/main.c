#include <stdio.h>

int main() {
    int numeros[10];

    printf("Ingresa 10 numeros:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Numeros en el orden inverso:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
