#include<stdio.h>
#include<stdbool.h>

/*
  START
      accept one number as No
      if the number is greater than 30 and if it is less than 50
      then display the message as number is in range 
      otherwise
      display the message as number is not in the range

  STOP

*/

bool CheckRange(int iNo)
{
    if ((iNo >= 30) && (iNo <= 50))
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

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet = CheckRange(iValue);
    if(bRet == true)
    {
        printf("YES \n");
    }
    else
    {
      printf("NO\n");
    }

    return 0;
}