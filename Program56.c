/*
take n from user chech whether no is 8 or not
*/
#include<stdio.h>
#include<stdbool.h>

int ChechDigit(int iNo)
{
  int iDigit = 0;
  bool bFlag = false;

  while (iNo!=0)
  {
    iDigit = iNo%10;
    if (iDigit==8)
    {
      bFlag = true;
      break;
    }
    iNo = iNo / 10;
    
  }
  return bFlag;
  

}

int main()
{
  int iValue = 0;
  bool bRet = false;

  printf("Enter Number\n");
  scanf("%d",&iValue);

  bRet = ChechDigit(iValue);
  if (bRet==true)
  {
    printf("digit 8 is present in number \n");
  }
  else
  {
    printf("Digit 8 is not present\n");
  }
  
  

  return 0;
}