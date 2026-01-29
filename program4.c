// problem statement : Accept 2 numbers from user and perform its addition

// step1 : Understand the problem statements
/* step2  : write the algorithms
 
Start 

accept first number from user consider its as No1
accept Second number from user consider its as No2
create one variable to store the answer as iAns

then perform the addition of No1 and No2
store the result into Ans
display the value of Ans

stop
*/ 
// step3 : select the language for write the code
// step4 : write the programme
// step5 : testing the code

#include<stdio.h>

int main()
{
   // int i, j , k;
   float fValue1 = 0.0, fValue2 = 0.0;
   float fResult = 0.0;

    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number: \n");
    scanf("%f", &fValue2);

    fResult = fValue1 + fValue2;
    printf("Addition is : %f\n",fResult);





    return 0;
}