#include<stdio.h>
#include<signal.h>
#include<unistd.h>

int main()
{
    int pid = 0;

    printf("Enter the PID of the process : \n");
    scanf("%d",&pid);

    kill(pid,SIGUSR1);

    

    return 0;
}