#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Enter the year\n");
        return 0;
    }
    int year = atoi(argv[1]);
    if ((year % 4==0 && year % 100 !=0) || year % 400 ==0)
        printf("Yes,%d is a leap year\n ", year);
    else 
        printf("No,%d is not a leap year\n",year);
    return 0;
}

