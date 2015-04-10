#include <stdio.h>

int main() {
    int a = 12;
    printf("%p\n",&a);  // address of a

    // Change a, but via its memory address
    int *ptr = &a; // create ptr, of type "pointer to int"
    *ptr = 15;
    printf("%i\n",a);
    printf("%i\n",*ptr);

    // ptr to a ptr because we can
    int **meta;
    meta = &ptr;
    **meta = 17;
    printf("%i\n",a);

    // Something bad
    ptr = (int*)12;
    *ptr = 42;
    printf("%i\n",*ptr);
    
}

