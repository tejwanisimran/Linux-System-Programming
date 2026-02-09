// Call of readdir() system call to raed from the directory.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<errno.h>
#include<sys/stat.h>
#include<dirent.h>
#include<sys/types.h>


int main()
{
    DIR * dp = NULL;
    struct dirent *ptr = NULL;

    dp = opendir("./Data");

    if(dp == NULL)
    {
        printf("%s\n",strerror(errno));
        return -1;
    }

    while(ptr = readdir(dp))
    {
        printf("INODE Number : %ld\n",ptr->d_ino);
        printf("File Name : %s\n",ptr->d_name);
    }

    closedir(dp);
    
    return 0;
}