#include<stdio.h>
#include<unistd.h>

int infinite_while(void)
{
    while (1)
    {
    	pid_t pid = getpid();
    	printf("Zombie process created, PID: %d\n", pid);
        sleep(1);
    }
        return (0);
}


int main(void)
{
	fork();
	infinite_while();
return 0;
}

