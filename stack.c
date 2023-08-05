#include <stdio.h>
#include <stdlib.h>

int main() {
    int *stack = (int*)malloc(20000 * sizeof(int));
    int *sp = stack;

    printf("%d\n", *sp);
    *sp = 22;
    printf("%d %d\n", *sp, sp);
    sp ++;
    printf("%d %d\n", *sp, sp);
    sp --;
    printf("%d %d\n", *sp, sp);

    printf("%d", stack);

    free(stack);
}
