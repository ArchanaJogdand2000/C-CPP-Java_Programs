#include<stdio.h>

void Display(int No)
{
    int iCnt = 0;

    iCnt = 1;
    while( iCnt <=No)
    {
    printf("Jay Hanuman...\n");
    iCnt++;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number of times you want to write Jay Hanuman:");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}