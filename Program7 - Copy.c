
// write program which accept the marks and display the class accordingly
// 0-34 fail
// 35-46 pass class 
// 50-59 second class 
// 60-74 first class
// 75-100 first class with destinction 

#include<stdio.h>
# include<stdbool.h>

void DisplayClass(float fMarks)
{
  if ((fMarks >= 0.0f)&&(fMarks < 35.00f))
  {
    printf("your are fail \n");
  }
  else if ((fMarks >= 35.00f)&&(fMarks < 50.00f))
  {
    printf("your are got pass class \n");
  }
  else if ((fMarks >= 50.00f)&&(fMarks < 60.00f))
  {
    printf("your are got second class \n");
  }
  else if ((fMarks >= 60.00f)&&(fMarks < 75.00f))
  {
    printf("your are got first pass class \n");
  }
  else if ((fMarks >= 75.00f)&&(fMarks < 100.00f))
  {
    printf("your are got first pass class with distinction \n");
  }
  
}

int main()
{
    float fValue = 0.0f;   // variable to accept input
    printf("please  enter your percentage : \n");
    scanf("%f",&fValue);

   DisplayClass(fValue);

    return 0;
}