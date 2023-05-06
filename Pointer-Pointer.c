#include<stdio.h>
int main()
{

    int No = 11;
    int *p = &No;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    int *****t = &s;
    int ******u = &t;

    printf("%d\n", No);
    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%d\n",&p);
 printf("%d\n",*****t);



    return 0;
}