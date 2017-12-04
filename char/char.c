#include <stdio.h>
int main () {
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z') {
        ch = ch + 32;
        printf("Lower case is : %c", ch);
    }
    else if (ch>='a' && ch<='z') {
        ch = ch-32;
        printf("Upper case is: %c", ch);
    }
    else {
        printf("Input is not a character");
    }
    return 0;
}
