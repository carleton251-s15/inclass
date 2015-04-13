#include <stdio.h>
#include <stdlib.h>

int x = 3;

void doit() {
    static int z = 0; // z goes in static memory
    z = z + 1;
    printf("%i\n",z);
}

int main() {
    //printf("%i\n",x);
    doit();
    doit();
    doit();
    printf("%i\n",z);
}
