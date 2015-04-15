#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
    // you would think..
    LList *list = malloc(sizeof(LList));
    (*list).data = 7;
    printf("%i\n",(*list).data);
}

