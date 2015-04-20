#ifndef LINKEDLIST_H
#define LINKEDLIST_H
struct LList {
    int data;
    struct LList *next;
};        // <--------------- DAVE GETS THIS WRONG EVERY TIME

typedef     struct LList     LList;

// function prototype
LList *init();
LList *addToFront(LList *oldlist, int number);
#endif




