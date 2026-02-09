#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void MarvellousHandler(int no)
{
    printf("Signal Arrived : %d\n",no);
}

int main()
{
    printf("PID is : %d\n",getpid());

    signal(SIGUSR1 , MarvellousHandler);

    while(1)
    {
        sleep(1);
    }

    return 0;
}