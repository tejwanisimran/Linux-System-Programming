#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main()
{
    int iRet  = 0;

    struct stat sobj;

    iRet = stat("demo.txt", &sobj);

    printf("INODE Number : %ld\n",sobj.st_ino);

    printf("HardLink Count : %ld\n",sobj.st_nlink);

    printf("Total size : %ld\n",sobj.st_size);

    printf("BlockSize : %ld\n",sobj.st_blksize);

    return 0;
}