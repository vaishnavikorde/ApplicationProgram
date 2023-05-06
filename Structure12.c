#include<stdio.h>

union Demo
{
    int i;
    float f;
    double d;
}obj1, obj2;


int main()
{
   obj1.i =23;
   obj1.f = 52.14;
   obj1.d = 54.236;
   obj2.d = 87.18;
   obj2.i = 52;
   obj2.f = 85.46;

   printf("%d\n",sizeof(obj1,obj2));

   printf("%f\n",obj1.d);

   printf("%f\n",obj2.f);


    return 0;
}