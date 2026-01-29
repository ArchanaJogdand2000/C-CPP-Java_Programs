#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your full name : \n");
    // joparyent user Enter det nahi topayent sarv input ghe
    
    scanf("%[^'\n']s",Arr); // ^ not mhantat , yala regular expration mhntat
                             // Hello : Archana Jogdand as yeil 
    printf("Hello : %s\n",Arr);

    return 0;
}