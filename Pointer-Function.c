#include<stdio.h>

int Addition (int No1, int No2)
{
    int Ans = 0; 
    Ans = No1+No2;
    return Ans;
}

int main()
{
    int value1 = 38, value2 = 98;
    int ret = 0;
    int (*ptr) (int, int);

    ptr = Addition;

    ret = ptr (value1, value2);
    printf ("%d\n", ret);

    return 0;

}