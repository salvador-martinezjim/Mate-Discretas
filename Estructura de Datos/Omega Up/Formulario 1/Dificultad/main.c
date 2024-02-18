#include <stdio.h>


int main()
{
    int examen1,examen2;

    scanf("%d %d",&examen1,&examen2);

    int diferencia= examen1-examen2;

    if(examen1>examen2){
            printf("%d %d ", 2 , diferencia);

    }
    else if(examen1==examen2){
        printf("Nivel Optimo");
    }
    else {
        printf("%d %d ", 1 , -diferencia);
    }

    return 0;
}
