#include<stdio.h>
 int stringCapX(char *str)
 {

    int iCnt = 0;
    
    while(*str != '\0')
    {                 //A = 65     Z = 90
        if((*str >= 'A') && (*str <= 'Z'))
        {
              iCnt++;
        }     
        str++;
        
    }
    return iCnt;
 }
int main()
{
     char Arr[20];
     int iRet = 0;
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = stringCapX(Arr);

    printf("Number of capital letters are  : %d\n", iRet);


    return 0;
}