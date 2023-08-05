#include <stdio.h>
#include <stdlib.h>

int main() {
    int *stack = (int*)malloc(20000 * sizeof(int));
    int *sp = stack;

    printf("%d\n", *sp);
    *sp = 22; 
    printf("%d %p\n", *sp, sp);
    sp ++; 
    printf("%d %p\n", *sp, sp);
    sp --; 
    printf("%d %p\n", *sp, sp);

    printf("%p", stack);

    free(stack);
}
