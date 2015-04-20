#include "linkedlist.h"
#include <stdlib.h>

// Linked list code

LList *init() {
    return NULL;
}

LList *addToFront(LList *oldlist, int number) {
    LList *node = malloc(sizeof(LList));
    (*node).data = 5;          // node->data = 5;
    (*node).next = oldlist;    // node->next = oldlist;
    return node;
}

    
