#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int calificaciones[n];


    for (int i = 0; i < n; i++) {
        scanf("%d", &calificaciones[i]);
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (calificaciones[j] < calificaciones[j + 1]) {
                int temp = calificaciones[j];
                calificaciones[j] = calificaciones[j + 1];
                calificaciones[j + 1] = temp;
            }
        }
    }


    for (int i = 0; i < n; i++) {
        printf("%d ", calificaciones[i]);
    }

    return 0;
}

