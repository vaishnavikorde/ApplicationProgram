
// write a program which check whether number is divisible by 3 and 5 
#include<stdio.h>
# include<stdbool.h>

/////////////////////////////////////////////////////////////
//
// fuction name :
// input :
// output :
// Description :
// author name:
// date :
// update date :
//////////////////////////////////////

bool CheckDivisible(int iNo)
{
  if (((iNo % 3)==0) && ((iNo % 5)==0))
  {
    return true;
  }
  else
  {
    return false;
  }
  
}

///////////////////////////////////////////////
// Entry point fuction
////////////////////////////////
int main()
{
    int iValue = 0;   // variable to accept input
    bool bRet = false; // varisble to accept return input

   
    printf("please  enter number to check wether it is divisible by 3 and 5 : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);   //fuction call

    if(bRet == true)
    {
        printf("%d is completely divisible by 3 and 5 \n", iValue);
    }
    else
    {
        printf("%d is not completely divisible by 3 and 5 \n",iValue);
    }


    return 0;
}