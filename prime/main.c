#include <stdio.h>
#include <stdlib.h>
#include "prime.c"

int main(int argc, char **argv) {
    char primcomp[3][30] = {"composite", "prime", "Neither Prime nor Composite"};
    if (argc < 2)
        return 0;
    int a = atoi(argv[1]);
    printf("%s\n", primcomp[isPrime(a)]);
    return 0;
}
