/*
take digit from user and check in it how many n is even
*/
#include<stdio.h>


int CountEvenDigit(int iNo)
{
  int iDigit = 0;
  int iCount = 0;
  
  if ((iNo<0))
  {
    iNo = -iNo;
  }
  while (iNo !=0)
  {
    iDigit = iNo%10;
    if((iDigit%2)==0)
    {
      iCount++;
    }
    iNo=iNo/10;
  }
  return iCount;

}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter Number\n");
  scanf("%d",&iValue);

  iRet = CountEvenDigit(iValue);

  printf("%d freuqency of  %d",iValue,iRet);


  return 0;
}