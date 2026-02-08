#include<stdio.h>
#include<unistd.h>

int main()
{
    int iRet = 0;

    iRet = truncate("demo.txt",30);

    if(iRet == 0)
    {
        printf("Truncate is succesfull\n");
    }
    else
    {
        printf("There is an issue in Truncate \n");
    }
    
    return 0;
}