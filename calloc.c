#include<stdio.h>
int main()
{
   int Arr [5];
   int size = 0;
   int *ptr = NULL;

   printf("Enter size of array \n");
   scanf("%d\n",size);

   ptr = (int*) calloc (sizeof (int), size);
    

    return 0;
}