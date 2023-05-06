#include<stdio.h>
int main()
{

    int No = 11;
    int *iptr = &No;

    char ch = 'A';
    char *cptr = &ch;

    double d = 23.21;
    double *dptr = &d;

   printf("%d\n",No);
   printf("%c\n",ch);
   printf("%f\n",d);
printf("%d\n",*iptr);
printf("%c\n",*cptr);
printf("%f\n",*dptr);

    return 0;
}