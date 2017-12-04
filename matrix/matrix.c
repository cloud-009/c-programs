#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int a,b;
    if (argc < 3) {
        printf("Please enter the number of rows and columns as command line arguments!\n");
        return 0;
    }
    a = atoi(*(argv + 1));
    b = atoi(*(argv + 2));
    //matrix input
    int matrix[a][b];
    int i,j;
    for (i=0;i<a;i++) {
        printf("Enter the %d row:\n", i+1);
        for (j=0;j<b;j++) {
            printf("Enter the %d column:\t",j+1);
            scanf("%d",*(matrix+i)+j);
        }
    }
    //print output
    for (i=0;i<a;i++) {
        printf("| ");
        for(j=0;j<b;j++)
            printf("%d ", *(*(matrix + i) + j));
        printf("|\n");
    }
    return 0;
}
