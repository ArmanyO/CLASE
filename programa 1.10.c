#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    float LA1, LA2, LA3, AUX, ARE;
    printf("3,4,7");
    scanf("%f %f %f" , &LA1, &LA2, &LA3);
    AUX = (LA1 + LA2 + LA3) / 2;
    ARE = sqrt ( AUX *(AUX - LA1) * ( AUX - LA2) * (AUX-LA3));
    printf("\nEl area del triangulo es: %6.2f" , ARE);
}
