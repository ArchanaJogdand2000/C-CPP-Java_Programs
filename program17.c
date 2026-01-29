// Display result of Students

/*
   0 to 35      fail                             (35 is exclusive)
   35 to 50     Pass class                       ( 50 is exclusive)
   50 to 60     second class                     (60 is exclusive)
   60 to 75     first class                      (75 is exclusive)
   75 to 100    first class with distinction      ( is exclusive)

*/

#include<stdio.h>
#include<stdbool.h>

#define RET_INVALID -1
#define RET_FAIL 1
#define RET_PASSCLASS 2
#define RET_SECONDCLASS 3
#define RET_FIRSTCLASS 4
#define RET_DISTINCTION 5

int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))  // filter, Input validation
    { return RET_INVALID;  }
    
    if((fMarks >= 0.0f) &&(fMarks < 35.0f))
    {  return RET_FAIL; }
    
    else if((fMarks>= 35.0f) && (fMarks < 50))
    { return RET_PASSCLASS;  }

    else if((fMarks>= 50.0f) && (fMarks < 60.0f))
    { return RET_SECONDCLASS;  }

    else if((fMarks>= 60.0f) && (fMarks < 75.0F))
    { return RET_FIRSTCLASS;  }

    else if((fMarks>= 75.0f) && (fMarks <= 100.0f))
    { return RET_DISTINCTION;  }

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
    else if(iRet == RET_PASSCLASS)
    {
        printf("Student is PASS\n");
    }
     else if(iRet == RET_SECONDCLASS)
    {
        printf("Student is having second class\n");
    }
     else if(iRet == RET_FIRSTCLASS)
    {
        printf("Student is having first class\n");
    }
     else if(iRet == RET_DISTINCTION)
    {
        printf("Student is having distinction\n");
    }

    return 0;
}