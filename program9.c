#include<stdio.h>
#include<stdbool.h>
// User is going to enter only positive inputs

// Algorithm
/*
   START
      Accept one number as No
      Divide that number No by 3
      If remainder is 0
      Divid that number No by 5
      if remainder is 0
      then display the numbe is divisible by 3 and 5
      otherwise display the result as number is either divisible by 3 or 5

    STOP 
*/

/////////////////////////////////////////////////////////////////////
//   
//    Function Name : CheckEvenOdd
//    Description   : user to check whether number is divisible by 3 and 5      
//    Input  :          Integer
//    Output :          Boolean
//    Date  :          16/04/2024
//    Auther :        Archana Ashok Jogdand
//
/////////////////////////////////////////////////////////////////////

bool CheckDivisible(unsigned int iNo)
{

    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {  return true;  }
    
    else
    {  return false; }
}
int main()
{
    
   unsigned int iValue = 0;
   bool bRet = false;

   printf("Enter number : \n");
   scanf("%d",&iValue );

   bRet = CheckDivisible(iValue);

   if(bRet == true)
   {
    printf("%d is divisible by 3 and 5\n",iValue);
   }
   else
   {
    printf("%d is not divisible either 3 or 5\n",iValue);
   }


    return 0;
}

/*
    Logical && operator 

    First        Sencond         &&       !!

     true         true          true     true
     false        false         false    false
     true         false         false    true   
      false       true          false    true
*/