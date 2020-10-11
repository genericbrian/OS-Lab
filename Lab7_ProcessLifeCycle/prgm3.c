//3. Using multi fork
#include<stdio.h>

#include<unistd.h>

#include<stdlib.h>

#include<sys/wait.h>

int main() {
  pid_t pid1, pid2;
  pid1 = fork();
  pid2 = fork();
  if (pid1 < 0) {
    fprintf(stderr, "Fork failed");
    exit(-1);
  }
  if (pid1 == 0) {
    printf("Parent process id 1:%u\n", getppid());
    printf("Process id 1:%u\n", getpid());
  }
  if (pid1 > 0) {
    wait(NULL);
    printf("Parent processid 1:%u\n", getppid());
    printf("Process id 1:%u\n", getpid());
    printf("Child Complete\n");
    //exit(0);
  }
  if (pid2 < 0) {
    fprintf(stderr, "Fork failed");
    exit(-1);
  }
  if (pid2 == 0) {
    printf("Parent process id2:%u\n", getppid());
    printf("Process id2:%u\n", getpid());
  }
  if (pid2 > 0) {
    wait(NULL);
    printf("Parent processid2:%u\n", getppid());
    printf("Process id2:%u\n", getpid());
    printf("Child Complete\n");
  }
}