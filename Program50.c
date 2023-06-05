#include<stdio.h>

void SumDigits(int iNo)
{
  int iDigit = 0;

  while (iNo != 0)
  {
    iDigit = iNo %10;
    printf("%d\n",iDigit);
    iNo = iNo /10;

  }
  
}
int main ()
{
  int iValue = 0, iRet=0;

  printf("Enter number :\n");
  scanf("%d",iValue);

  SumDigits(iValue);
  printf("Sum of digits are : %d",iRet);

  return 0;
}