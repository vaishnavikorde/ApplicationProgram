
// take two inpute from user and display first number is power of second number
#include<stdio.h>
#include<stdbool.h>


int CalculatePower(int iBase, int iPower)
{
 
  int iCnt = 0;
  int iResult = 1;

  iCnt = 1;
  while(  iCnt <= iPower)
  {
    iResult = iResult * iBase; 
    iCnt++;
  }

  return iResult; 
}

int main()
{
  int iValue1 = 0, iValue2 = 0;
  int iRet = 0;

  printf("Enter number :\n");
  scanf("%d",&iValue1);
  printf("Enter number :\n");
  scanf("%d",&iValue2);

  iRet = CalculatePower(iValue1, iValue2);
 
  printf("%d Result is\n",iRet);

  
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