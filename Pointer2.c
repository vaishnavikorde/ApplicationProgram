#include<stdio.h>
int main()
{
   int No = 11;
   int *p = &No;
   int *q = &No;

   printf("%d\n", &*p);
    return 0;
}