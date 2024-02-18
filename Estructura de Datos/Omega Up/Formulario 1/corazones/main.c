#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int hearts;
        scanf("%d", &hearts);

        for (int j = 0; j < hearts; j++) {
            printf("<3");
        }

        printf("\n");
    }

    return 0;
}
