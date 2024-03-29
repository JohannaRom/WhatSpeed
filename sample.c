#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
char cmd[BUFSIZE] = "wc -c < ";
  if(argc != 2) {
          printf("Error: Please enter a program to time!\n");
          return -1;
     }

     memset(&command, 0, sizeof(command));

     strcat(command, "time ./");
strcat(cmd, argv[1]);
system(cmd);
}
