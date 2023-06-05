#include<stdio.h>

int CountDigit(int iNo)
{
  int iDigit = 0;
  int iCount = 0;

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    iCount++;
    iNo = iNo / 10;
  }
  return iCount;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the  number \n");
  scanf("%d",&iValue);

  iRet = CountDigit(iValue);

  printf("%d",iRet);

  return 0;
}