#include<stdio.h>

struct Pointer
{
    int i;
    int j;
    int *ip;
    float *fp;
};

int main()
{
    struct Pointer obj;
    int No = 10;
    float f = 20;

    obj.i = 11;
    obj.j = 21;
    obj.ip = &No;
    obj.fp = &f;
    printf("%d\n",obj.i);
     printf("%d\n",obj.j);
      printf("%d\n",(obj.ip));
       printf("%d\n",(obj.fp));

    return 0;
}