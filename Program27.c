
//variation in perfect number
// most imp variation for interview
#include<stdio.h>
#include<stdbool.h>


bool CheckPerfect(int iNo)
{
  int iCnt = 0;
  int iSum = 0;
  
  for(iCnt=1; iCnt <= (iNo / 2); iCnt++)  //in time complexity we should reduse icnt<=ino;&icnt++
  {
    if ((iNo%iCnt)==0)
    {
      iSum = iSum + iCnt;
    }
    if (iSum) // vip
    {
      break;
    }
     
  }
    if (iSum== iNo)
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
  int iValue = 0;
  bool bRet = false;
  printf("Enter number :\n");
  scanf("%d",&iValue);

  bRet = CheckPerfect(iValue);
  if (bRet == true)
  {
    printf(" %d is perfect number \n",iValue);
  }
  else
  {
    printf("%d is not perfect number \n",iValue);
  }
  
  return 0;
}