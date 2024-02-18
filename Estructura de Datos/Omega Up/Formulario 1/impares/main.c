#include <stdio.h>

int main() {
    int numero;
    int suma = 0;

    scanf("%d", &numero);

        if (numero > 1 || numero<=1000) {
                 for (int i = 1; i <= numero; i++) {
            if (i % 2 != 0) {
                printf("%d +", i);
                suma += i;
            }
        }

      }
      else{
            printf("El número debe ser mayor que 1.\n");
    }
    printf("\n");
        printf("La suma de los números impares es: %d\n", suma);
    return 0;
}

