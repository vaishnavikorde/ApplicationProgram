
// take one number from user and find the factorial of that number
#include<stdio.h>

int Factorial(int iNo)
{
  int iFct = 1;
  int iCnt = 0;
  for ( iCnt = 1; iCnt <=iNo ; iCnt++)
  {
    iFct = iFct * iCnt;
  }
  return iFct;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number :\n");
  scanf("%d",&iValue);

  iRet = Factorial (iValue);

  printf("Result is : %d",iRet);

  
  return 0;
}

/*
iNo = 5
5!
factorial = 5*4*3*2*1 = 120


*/