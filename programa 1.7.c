#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float PIE, LIB, MET, KIL;
    printf(" 15, 20 ");
    scanf("%f %f", &PIE, &LIB);
    MET = PIE * 0.09290;
    KIL = LIB * 0.45359;
    printf("\nDatos del objeto \nLongitud: %5.2f  \t Peso: %5.2f", MET, KIL);
}
