#include<stdio.h>
int main()
{
    int a=34, b=23,c,d;
    c=++a;
    d=b++;

    printf("a=%d, b=%d, c=%d, d=%d \n",a,b,c,d);
    
    return 0;
}