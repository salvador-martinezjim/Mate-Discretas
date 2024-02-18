#include <stdio.h>
#include <stdlib.h>

int main() {
    int numEdades, edadBuscar,cuenta = 0;

    printf("Numero de edades a capturar: ");
    scanf("%d", &numEdades);
    int edad[numEdades];

    printf("\nLeer elementos de un vector\n");
    for (int i = 0; i < numEdades; i++) {
        printf("Edad[%d]: ", i);
        scanf("%d", &edad[i]);
    }

    printf("\nImprime elementos de un vector\n");
    for (int i = numEdades - 1; i >= 0; i--) {
        printf("edad[%d]: %d\n", i, edad[i]);
        if (edad[i] >= 18) {
            cuenta++;
        }
    }

    printf("Mayores de edad: %d\n", cuenta);


    printf("Ingrese la edad que desea buscar: ");
    scanf("%d", &edadBuscar);


    cuenta = 0;
    for (int i = 0; i < numEdades; i++) {
        if (edad[i] == edadBuscar) {
            cuenta++;
        }
    }

              if(cuenta == 1)
    {

         printf("La edad %d se repite %d vez.\n", edadBuscar, cuenta);
    }

    if (cuenta >= 2) {
        printf("La edad %d se repite %d veces.\n", edadBuscar, cuenta);

    }

    if (cuenta <=0) {
        printf("La edad %d no se encuentra en la lista.\n", edadBuscar);
    }

    return 0;
}

