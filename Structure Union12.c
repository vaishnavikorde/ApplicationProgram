#include<stdio.h>

 union demo
{
    int i;
    float f;
    double d;
};

int main()
{
    union Demo obj;
    printf("%d\n"sizeof(obj));

    return 0;
}