
// take inpute from user and display factor of that number
#include<stdio.h>

void DisplayFactors(int iNo)
{

  int iCnt = 0;

  for(iCnt=1; iCnt <= iNo; iCnt++)  //updator
  {
    printf("%d\n",iCnt);
    
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