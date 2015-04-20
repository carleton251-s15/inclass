#include <stdio.h>
#include <stdlib.h>

int main() {
    int *things;
    things = malloc(2*sizeof(int));
    things[0] = 12;
    things[1] = 19;
    things[2000000] = 27;
    
}
