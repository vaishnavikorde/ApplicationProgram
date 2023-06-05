/*
take digit from user and find the n is present or not 
*/
#include<stdio.h>
#include<stdbool.h>


bool CheckDigit(int iNo1, int iSearch)
{
  int iDigit = 0;
  
  if((iSearch<0)||(iSearch>9))
  {
    printf("enter the digit in range 0 to 9 \n");
    return false;
  }
  if ((iNo1<0))
  {
    iNo1 = -iNo1;
  }
  while (iNo1 !=0)
  {
    iDigit = iNo1%10;
    if(iDigit==iSearch)
    {
      break;
    }
    iNo1=iNo1/10;

  }
  if (iDigit==iSearch)
  {
    return true;
  }
  else
  {
    return false;
  }

}

int main()
{
  int iValue1 = 0, iValue2 =0;
  bool bRet = 0;

  printf("Enter Number\n");
  scanf("%d",&iValue1);

  printf("Enter digit(0-9)\n");
  scanf("%d",&iValue2);

  bRet = CheckDigit(iValue1,iValue2);

  if (bRet == true)
  {
    printf("%d is present in %d",iValue2,iValue1);
  }
  else
  {
    printf("%d is not present in %d",iValue2,iValue1);
  }
  

  return 0;
}