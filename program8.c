#include<stdio.h>
#include<stdbool.h>
// User is going to enter only positive inputs

// Algorithm
/*
   START
      Accept one number as No
      Divide that number No by 2
      If remainder is 0
      then display the result as Even number
      otherwise display the result as Odd number

    STOP 
*/

/////////////////////////////////////////////////////////////////////
//   
//    Function Name : CheckEvenOdd
//    Description   : user to check whether number is even or odd       
//    Input  :          Integer
//    Output :          Boolean
//    Date  :          16/04/2024
//    Auther :        Archana Ashok Jogdand
//
/////////////////////////////////////////////////////////////////////
bool CheckEvenOdd(unsigned int iNo)
{

    if((iNo % 2) == 0)
    
    {  return true;  }
    else
    {  return false; }
}
int main()
{
    
   unsigned int iValue = 0; // unsigned means only positive number it also 4 bytes of integer
   bool bRet = false;

   printf("Enter number : \n");
   scanf("%d",&iValue );

   bRet = CheckEvenOdd(iValue);

   if(bRet == true)
   {
    printf("%d is Even number\n",iValue);
   }
   else
   {
    printf("%d is Odd number\n",iValue);
   }


    return 0;
}