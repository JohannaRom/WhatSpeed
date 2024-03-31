#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 100

void initialize(int *a) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        a[i] = i;
    }
}

int main(int argc, char *argv[]) {
    int a[ARRAY_SIZE];
    initialize(a);
    int index = atoi(argv[1]);
    printf("a[%d]=%d\n", index, a[index]);
}
