#include <stdio.h>
#include <stdlib.h>

// Allocate memory on the fly

int main() {
    printf("%i\n",sizeof(int));
    int *x;
    x = malloc(sizeof(int));
    *x = 12;
    printf("my number is = %i\n",*x);
    x = malloc(sizeof(int));
    // The previous int I malloc'ed is now GARBAGE!
    // and littering. No garbage collector.
    // Memory leak.
    *x = 15;
}
