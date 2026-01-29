// problem statement : Accept 2 numbers from user and perform its addition

#include<stdio.h>

int main()
{
   // int i, j , k;
   int iValue1, iValue2;
   int iResult;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d", &iValue2);

    iResult = iValue1 + iValue2;
    printf("Addition is : %d\n",iResult);


    return 0;
}