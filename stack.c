#include <stdio.h>
#include <stdlib.h>

void run(char *prog, int *sp) {
    printf("%p %d", sp, *sp);
}

int main(int argc, char **argv) {
    int *stack = (int*)malloc(20000 * sizeof(int));
    int *sp = stack;

    FILE *fp;
    char prog[2000];

    fp = fopen(argv[1], "r");

    fread(&prog, sizeof(char), -1, fp);

    run(prog, sp);

    free(stack);
    return 0;
}
