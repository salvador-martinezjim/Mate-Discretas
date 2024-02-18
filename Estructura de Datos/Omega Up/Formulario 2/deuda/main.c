#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int deuda = 0;

    for (int i = 0; i < M; i++) {
        int pago;
        scanf("%d", &pago);
        deuda += pago;
    }

    int saldo_final = N - deuda;

    printf("%d\n", saldo_final);

    return 0;
}
