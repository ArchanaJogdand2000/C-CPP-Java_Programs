/* accept number from user and check whether number is perfect or not
  
 # perfect number means addition of factors is equal to that number

   Accept number as NO
   Search all its factors
   perform addition of all the factors 
   if addition is same as No
   then Display as NO is perfect number
   otherwise the number is not perfect
   */
  
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
   int iCnt = 0, iSum = 0;

   for(iCnt =1; iCnt <= (iNo / 2); iCnt++)
   {
      if((iNo % iCnt) == 0)
      {
         iSum = iSum + iCnt;
      }
   }
   if(iSum == iNo)
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

     printf("Enter number : ");
     scanf("%d",&iValue);
    
    bRet = CheckPerfect(iValue);
    if( bRet == true)
    {
      printf("%d is a perfect number \n",iValue);
    }
    else
    {
       printf("%d is not a perfect number \n",iValue);
    }


   return 0;

}