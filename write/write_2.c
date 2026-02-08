#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<errno.h>

int main()
{
    int fd = 0;
    char Buffer[] = "HelloWorld";
    int iRet = 0;

    fd = open("demo.txt",O_WRONLY);

    if(fd < 0)
    {
        printf("Unable to open the file\n");
        printf("Reason : %s\n",strerror(errno));
        return -1;
    }

    printf("File succesfully opened with fd : %d\n",fd);

    iRet = write(fd , Buffer , 10);   // Overwrite issue

    printf("%d bytes gets succesfully written\n",iRet);

    close(fd);
    
    return 0;
}