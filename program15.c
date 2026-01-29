// Display result of Students

#include<stdio.h>

int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))  // filter
    {
       // printf("Invalid input\n");
        return 1;
    }
    if((fMarks >= 0.0f) &&(fMarks < 35.0f))
    {
        return 2;
    }
    else
    {
        return 3;
    }

}
int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf(" please enter your percentage: ");
    scanf("%f",&fValue);

    iRet = DisplayResult(fValue);
    if( iRet == 1)
    {
       printf(" Your input is invalid ");
    }
    else if(iRet == 2)
    {
        printf(" Student is fail\n");
    }
    else if(iRet == 3)
    {
        printf("Student is PASS\n");
    }


    return 0;
}