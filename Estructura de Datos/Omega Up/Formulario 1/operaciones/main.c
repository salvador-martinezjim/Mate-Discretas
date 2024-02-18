#include <stdio.h>


int main()
{
    int a,b;
    scanf("%d %d",&a ,&b);

    int suma= a+b;
    int resta= a-b;
    int multiplicacion= a*b;
    int div= a/b;
    int mod= a%b;
    printf("%d %d %d %d %d", suma ,resta, div, multiplicacion);
    return 0;
}
