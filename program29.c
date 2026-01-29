//accept nunber from  user and check whether it is between the range  10 to 20 
#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if((iNo >= 10) && (iNo <= 20))
    { return true;  }
    else
    {  return false; }

}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);
    
    bRet = CheckRange( iValue);

    if(bRet == true)
    { 
        printf( "given number is between the range 10 to 20");
     }
    else
    {
        printf("given number is not between the range 10 to 20 ");
    }

    
return 0;
}
    
    
    

