#include <stdio.h>
#include <stdlib.h>

// Allocate memory on the fly

int main() {
    printf("%i\n",sizeof(int));
    int *x;
    x = malloc(sizeof(int));
    printf("x points to %p\n",x);
    //*x = 12;
    //free(x);
    printf("my number is = %i\n",*x);
    /* free(x); // free memory x is pointing to */
    /* //x = malloc(sizeof(int)); */
    /* *x = 15; */
    /* printf("my number is = %i\n",*x); */
}
