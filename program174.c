 #include<stdio.h>
 #include<stdbool.h>

bool  CheckOccurance(char *str)
 {
    bool bFlag = false;
    while(*str != '\0')
    {                
        if(*str == 'w' )
        {
           bFlag  = true;
           break;
              
        }     
        
        str++;
    }
    return bFlag;
    
 }
int main()
{
     char Arr[100];
     int iRet = 0;
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet =CheckOccurance(Arr);

    if(iRet == true)
    {
        printf("w is present in the string \n");

    }
    else
    {
       printf("w is not present in the string \n"); 
    }

    return 0;
}  
