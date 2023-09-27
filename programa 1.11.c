#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    float X1, Y1, X2, Y2, X3, Y3, LA1,LA2,LA3, PER;
    printf("1,1");
    scanf(" %f %f" , &X1, &Y1 );
    printf("1,5");
    scanf("%f %f" , &X2, &Y2 );
    printf("5,1");
    scanf("%f %f" , &X3, &Y3 );
    LA1 = sqrt (pow(x1-x2, 2) + pow(y1-y2, 2));
    LA2 = sqrt (pow(x2-x3, 2) + pow(y2-y3, 2));
    LA3 = sqrt (pow(x1-x3, 2) + pow(y1-y3, 2));
    PER = LA1 + LA2 + LA3;
    printf("\nEl perimetro de triangulo es: %6.3f" , PER);
}
