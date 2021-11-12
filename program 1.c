ESP32 GPS Tracker- IoT based Vehicle Tracking System




#include <stdio.h>

int main() {
  int fork1 = fork();
  if (fork1 < 0) {
    printf("error\n");
  } else if (fork1 == 0) {
    printf("I'm child 1\n");
    printf("child 1: parent: %i\n", getppid());
    printf("child 1: my pid: %i\n", getpid());
  } else {
    int fork2 = fork();
    if (fork2 < 0) {
      printf("error\n");
    } else if (fork2 == 0) {
      printf("I'm child 2\n");
      printf("child 2: parent: %i\n", getppid());
      printf("child 2: my pid: %i\n", getpid());
    } else {
      printf("I'm the parent\n");
      printf("The PIDs are:\n");
      printf("parent: %i\n", getpid());
      printf("child 1: %i\n", fork1);
      printf("child 2: %i\n", fork2);
    }
  }
  return 0;
}