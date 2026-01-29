#include<stdio.h>
#include<unistd.h> // universal standard .h file
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
                              // it is a octal number
    fd = creat("Marvellous.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets succesfully created with fd %d\n",fd);
    }

    return 0;
}