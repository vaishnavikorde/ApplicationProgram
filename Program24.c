
// take inpute from user and display factor of that number and add total factor
#include<stdio.h>

int SumFactors(int iNo)
{

  int iCnt = 0;
  int iSum = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }
  

  for(iCnt=1; iCnt <= (iNo / 2); iCnt++)  //in time complexity we should reduse icnt<=ino;&icnt++
  {
    if ((iNo%iCnt)==0)
    {
      iSum = iSum + iCnt;
    }
    
  }
  return iSum;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter number :\n");
  scanf("%d",&iValue);
  SumFactors(iValue);

  iRet = SumFactors(iValue);
  printf("Sumation of factor is : %d\n",iRet);

  return 0;
}