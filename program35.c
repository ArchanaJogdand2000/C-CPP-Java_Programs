// Factors of given number

#include<stdio.h>
#include<stdbool.h>

// Time comlpexcity order of 0(N)

void DisplayFactors(int iNo)
{
   int iCnt = 0;
   printf("Factors of %d are : \n",iNo);
   for(iCnt = 1; iCnt <iNo  ; iCnt++)
   {
      if((iNo % iCnt) == 0)
      { printf("%d\n",iCnt); }
   
   }
}
int main()
{
   int iValue = 0;
   
   printf("Enter number : \n");
   scanf("%d",&iValue);

   DisplayFactors(iValue);
   

    return 0;
}
