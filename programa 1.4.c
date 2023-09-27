#include <stdio.h>
#include <stdlib.h>


void main (void)
{
    int CLA;
    float SU1, SU2, SU3, SU4, SU5, SU6, ING, PRO;
    printf ("231, 14000, 15000, 14000, 13000, 18000, 20000: \n");
    scanf ( " %d %f %f %f %f %f %f" , &CLA, &SU1, &SU2, &SU3, &SU4, &SU5, &SU6);
    ING = (SU1 + SU2 + SU3 + SU4 + SU5 + SU6);
    PRO = ING / 6;
    printf ("\ %d %5.2f" , CLA, ING, PRO);
}
