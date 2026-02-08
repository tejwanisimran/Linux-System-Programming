#include<stdio.h>
#include<unistd.h>

int main()
{
    int iRet = 0;

    iRet = truncate("demo.txt",10);

    if(iRet == 0)
    {
        printf("Truncate is succesfull\n");
    }
    else
    {
        printf("Truncate is failed\n");
    }
    
    return 0;
}