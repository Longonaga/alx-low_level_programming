#include "main.h"
/**
*swap-int:swap two integer values
*return:nothing
*/

void swap_int(int *a,int *b)
{
  int tmp = *a;
  *a = *b;
  *b =tmp;
}  
