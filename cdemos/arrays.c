#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[5];
    nums[0] = 3;
    nums[1] = 42;
    printf("The first one is...%i\n",nums[0]);
    printf("The first one is...%i\n",*nums);
    printf("The second one is...%i\n",nums[1]);
    printf("The second one is...%i\n", *(nums+1));
    printf("Address of nums[0]: %p\n",&(nums[0]));
    printf("Address of nums[0]: %p\n",nums);
    printf("Address of nums[1]: %p\n",&(nums[1]));

    int *things;
    things = malloc(2*sizeof(int));
    things[0] = 12;
    things[1] = 19;
    printf("The is...%i\n",things[0]);
    printf("The is...%i\n",things[1]);
    printf("The is...%i\n",(things+1)[-1]);
    printf("The is...%i\n",things[-2000]);
    free(things);
    
}
