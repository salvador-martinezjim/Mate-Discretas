#include <stdio.h>

int main() {
    long long numeroBinario;
    long long numeroBinarioOriginal;
    int decimal = 0, base = 1, resto;



    scanf("%lld", &numeroBinario);
    numeroBinarioOriginal = numeroBinario;


    while (numeroBinario > 0) {
        resto = numeroBinario % 10;
        decimal += resto * base;
        base *= 2;
        numeroBinario /= 10;
    }


    printf("%lld:%d",numeroBinarioOriginal,decimal);

    return 0;
}