#include <stdio.h>
#include <stdlib.h>

int main() {
    int r,c;
    printf("Enter the no. of Salesman:\n");
    scanf("%d",&r);
    printf("Enter the no. of Items:\n");
    scanf("%d",&c);
    printf("\n\n\n");
    double saledata[r][c];
    printf("Enter the sale data:\n");
    int i,j;
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            printf("Sale amount for salesman %d and item no %d :",i+1,j+1);
            scanf("%lf",&saledata[i][j]);
        }
    }
    printf("-------------------------------------------------\n");
    printf("Sale Data:\n");
    printf("-------------------------------------------------\n\n");
    double total=0.0;
    for (i=0;i<r;i++) {
        printf("Sale data for salesman %d \n",i+1);
        printf("-----------------------------------------------\n");
        total=0.0;
        for (j=0;j<c;j++) {
            printf("\tSale data for item %d: $%0.2lf\n",j+1,saledata[i][j]);
            total += saledata[i][j];
        }
        printf("\tTotal : $%0.2lf\n",total);
        printf("\n\n\n");
    }
    return 0;
}

    
