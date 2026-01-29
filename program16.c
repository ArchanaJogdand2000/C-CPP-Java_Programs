// Display result of Students
#include<stdio.h>
#include<stdbool.h>

#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASS 3


int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))  // filter, Input validation
    {
        printf("Invalid input\n");
        return RET_INVALID;
    }
    if((fMarks >= 0.0f) &&(fMarks < 35.0f))
    {
        return RET_FAIL;
    }
    else
    {
        return RET_PASS;
    }

}
int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf(" please enter your percentage: ");
    scanf("%f",&fValue);

    iRet = DisplayResult(fValue);
    if( iRet == RET_INVALID)
    {
       printf(" Your input is invalid ");
    }
    else if(iRet == RET_FAIL)
    {
        printf(" Student is fail\n");
    }
    else if(iRet == RET_PASS)
    {
        printf("Student is PASS\n");
    }


    return 0;
}