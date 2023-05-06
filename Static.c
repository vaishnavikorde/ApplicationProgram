#include<stdio.h>

void Demo()
{
    static int No = 10;    // When we use static storage class, value will be ++ after calling the function ie demo.
    No++;
    printf("%d\n",No);

}
int main()
{
    Demo();
    Demo();
    return 0;
}