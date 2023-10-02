#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * infinite_while - Run an infinite while loop.
 * Return: 0 (Always).
 */
int inf_while(void)
{
while (1)
{
sleep(1);
}
return (0);
}

/**
 * main - Creates five zombie processes.
 * Return: 0 (Always)
 */
int main(void)
{
char i = 0;
pid_t pid;

for (; i < 5; i++)
{
pid = fork();
if (pid > 0)
{
printf("Zombie process created, PID: %d\n", pid);
sleep(1);
}
else
exit(0);
}

inf_while();
return (EXIT_SUCCESS);
}
