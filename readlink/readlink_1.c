#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>

int main()
{
    int fd = 0;

    fd = open("./Test/LSPl.txt",O_RDONLY);     // issue

    if(fd == -1)
    {
        printf("Unable to open the file %s \n",strerror(errno));
        return -1;
    }

    printf("File opened with fd : %d\n", fd);

    close(fd);

    return 0;
}