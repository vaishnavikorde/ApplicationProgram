
// take one number from user and find the factorial of that number
#include<stdio.h>

void DisplayF(int iNo)
{
 
  int iCnt = 0;

  iCnt = 1;
  while ( iCnt <= iNo)
  {
    printf("%d\t",iCnt);
    iCnt++;
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number :\n");
  scanf("%d",&iValue);

  DisplayF (iValue);

  
  return 0;
}

/*
Base = 2
power = 5;

result = 1
result = 2*2*2*2*2*2
result = result*2
result = result*2
result = result*2
result = result*2


*/