#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    int size = 0;
    int *ptr = NULL;

    printf("Enter size of integer \n");
    scanf("%d", size);

    ptr = (int*) malloc (sizeof (int) * size);
    

    return 0;
}