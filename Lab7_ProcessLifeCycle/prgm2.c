//2. Execute and list parent process
#include <stdio.h>

#include <unistd.h>

#include <stdlib.h>

#include <sys/wait.h>

pid_t pid;
void main() {
  pid = fork();
  if (pid < 0) {
    fprintf(stderr, "Fork failed");
    exit(-1);
  } else if (pid == 0) {
    execlp("/bin/ls", "ls", NULL);
  } else {
    wait(NULL);
    printf("Child process completed");
    exit(0);
  }
}