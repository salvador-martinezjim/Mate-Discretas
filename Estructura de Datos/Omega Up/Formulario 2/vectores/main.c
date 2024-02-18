#include <stdio.h>

int main() {
    int n, i;

    printf("Ingrese el número de componentes en los vectores: ");
    scanf("%d", &n);

    int vector1[n], vector2[n], vectorSuma[n];

    printf("Ingrese las %d componentes del primer vector: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vector1[i]);
    }

    printf("Ingrese las %d componentes del segundo vector: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vector2[i]);
    }


    for (i = 0; i < n; i++) {
        vectorSuma[i] = vector1[i] + vector2[i];
    }


    printf("El vector resultante de la suma es: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vectorSuma[i]);
    }

    return 0;
}
