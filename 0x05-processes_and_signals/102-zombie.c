#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * infinite_while - function that runs indefinitely
 * Return: 0 on success
 */
int infinite_while(void)
{
    while (1)
    {
        sleep(1);
    }
    return (0);
}

/**
 * main - creates 5 zombie processes
 * Return: Always 0
 */
int main(void)
{
    pid_t pid;
    int i;

    for (i = 0; i < 5; i++)
    {
        pid = fork();  // Create a child process
        if (pid > 0)  // This is the parent process
        {
            printf("Zombie process created, PID: %d\n", pid);
        }
        else if (pid == 0)  // This is the child process
        {
            exit(0);  // Child exits immediately, creating a zombie
        }
        else  // Fork failed
        {
            perror("Fork failed");
            exit(1);
        }
    }

    // Reap the zombie processes
    for (i = 0; i < 5; i++)
    {
        wait(NULL);  // Wait for any child process to exit
    }
    
    infinite_while();  // Keep the parent process running
    return (0);
}
