
// take one number from user and find the factorial of that number
#include<stdio.h>

int Factorial(int iNo)
{
  int iFct = 1;
  int iCnt = 0;
  
  iCnt = 1;
  while (iCnt <=iNo  )
  {
    iFct = iFct * iCnt;
    iCnt++;
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
Base = 2
power = 5;

result = 1
result = 2*2*2*2*2*2
result = result*2
result = result*2
result = result*2
result = result*2


*/