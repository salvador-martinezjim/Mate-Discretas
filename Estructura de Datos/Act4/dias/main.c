#include <stdio.h>

int main() {
    int dia, mes;
    int dias_meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Ingrese el dia (1-31): ");
    scanf("%d", &dia);

    printf("Ingrese el mes (1-12): ");
    scanf("%d", &mes);

    if (mes < 1 || mes > 12 || dia < 1 || dia > dias_meses[mes - 1]) {
        printf("Fecha no válida.\n");
        return 1;
    }

    int dias_restantes = 0;
    for (int i = mes - 1; i < 12; i++) {
        dias_restantes += dias_meses[i];
    }
    dias_restantes -= dia;

    printf("Dias restantes en el año: %d\n", dias_restantes);

    return 0;
}

