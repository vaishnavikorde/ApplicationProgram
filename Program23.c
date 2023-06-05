
// take inpute from user and display factor of that number
// time Complexity this program is N/2

#include<stdio.h>

void DisplayFactors(int iNo)
{

  int iCnt = 0;

  for(iCnt=1; iCnt <= (iNo / 2); iCnt++)  //O (N/2)
  {
    if ((iNo%iCnt)==0)
    {
      printf("%d\n",iCnt);
    }
    
  }
  
}

int main()
{
  int iValue = 0;
  printf("Enter number :\n");
  scanf("%d",&iValue);
  DisplayFactors(iValue);

  return 0;
}