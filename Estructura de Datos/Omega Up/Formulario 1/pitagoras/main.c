#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d;

    scanf("%lf %lf",&a,&b );

    d=(a*a) + (b*b);
    c=sqrt(d);

    printf("%.3lf",c);
    return 0;
}
