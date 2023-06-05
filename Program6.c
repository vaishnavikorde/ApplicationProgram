
// write a program which checks wether even odd number 
#include<stdio.h>   // for printf scanf
#include<stdbool.h>  // for bool datatype

/////////////////////////////////////////////////////////////
//
// fuction name : CheckEvenOdd
// input :  Integer
// output : Boolean
// Description : checks wethere input is even or odd
// author name: korde vaishnavi ramrao
// date : 25/04/2023
// update date :26/04/2023
//////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
  if ((iNo % 2)==0)
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

   
    printf("please  enter number to check wether it is even or odd : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);   //fuction call

    if(bRet ==  true)
    {
        printf("%d is even number \n", iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }


    return 0;
}