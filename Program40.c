
// take one number from user and find the factorial of that number
#include<stdio.h>
 
typedef unsigned long int ULONG;
ULONG Factorial(int iNo)
{
  ULONG iFct = 1;
  int iCnt = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }
  
  for ( iCnt = iNo; iCnt >=1; iCnt--)
  {
    iFct = iFct * iCnt;
  }
  return iFct;
}

int main()
{
  int iValue = 0;
  ULONG iRet = 0;

  printf("Enter number :\n");
  scanf("%d",&iValue);

  iRet = Factorial (iValue);

  printf("Result is : %d",iRet);

  
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