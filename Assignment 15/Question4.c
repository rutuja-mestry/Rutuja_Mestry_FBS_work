#include<stdio.h>

struct Product {
    char name[20];
    float price;
    int qty;
};

void main() {
    struct Product p[5];
    int n, i;
    float total=0;

    printf("Enter number of products: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        printf("\nEnter Product %d:\n", i+1);
        scanf("%s%f%d",
              p[i].name,
              &p[i].price,
              &p[i].qty);

        total += p[i].price * p[i].qty;
    }

    printf("\nTotal Bill = %.2f", total);
}