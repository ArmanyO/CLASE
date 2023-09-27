#include <stdio.h>
#include <stdlib.h>

void main (void)
{
  int  i = 15, j, k, l;

  j = (15 > i--) > (14 < ++i);

  k = ! ('b' != 'd') > (!i - 1);
  printf ("\nEl valor de k es: %d" , k);

  l = ( ! (34> (70 % 2))+_) 0);
  printf ( "\nEl valor de l es: %d" , k);

  }


