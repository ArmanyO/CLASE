#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    float ECA;
    printf("104.5");
    scanf ("%f" , &ECA);
    ECA = ECA * 4047 / 10000;
    printf ("\nEXTENSION DE LA ESTANCIA EN HECTAREAS: %5.2F" , ECA);
}

