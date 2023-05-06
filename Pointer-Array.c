#include<stdio.h>
int main()
{
   int Arr [5] = {10,20,30,40,50};
   int *p = &(Arr [3]);
   int *q = &(Arr [4]);

   printf("%d\n",*q);

   printf("%d\n", *p);
    return 0;
}