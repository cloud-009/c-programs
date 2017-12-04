#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int i,k;
    long t; 
    t= time(NULL);
    srand(t);
    for (i=0;i<=10;i++) {
        k= rand() %100 ;
        printf("\t%d\n " , k);
    }
    return 0;
}
        
