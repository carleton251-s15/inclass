#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *word = "hello";
    printf("%s\n",word);

    // Make a copy in memory that I allocate
    char *word2 = malloc(sizeof(char)*(strlen(word)+1)); // room for null terminator
    
    // The hard way
    /* for (int i=0; i < strlen(word); i++) { */
    /*     word2[i] = word[i]; */
    /* } */
    /* // BUT: strlen doesn't include the null terminator */
    /* word2[strlen(word)] = '\0'; */

    // The easy way!!!
    strcpy(word2,word);
    printf("%s\n",word2);
    free(word2);
}
