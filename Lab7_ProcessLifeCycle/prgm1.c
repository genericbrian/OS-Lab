//Aim: To call parent and child process using fork command
#include <stdio.h> 
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
pid_t pid;
void main(){
fork(); if(pid<0)
{
    fprintf(stderr,"Fork failed"); exit(-1);
}
else if(pid==0)
{
    printf("Parent process id:%u\n",getppid()); printf("Child process id:%u\n",getpid()); exit(0);
}
else
{
    wait(NULL);
    printf("Parent process id:%u\n",getppid()); printf("Child process id:%u\n",getpid()); exit(0);
}
}