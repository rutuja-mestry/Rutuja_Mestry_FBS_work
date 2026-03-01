#include<stdio.h>

struct Book {
    char name[20];
    int id;
    char author[20];
    float price;
};

void main() {
    struct Book b;

    printf("Enter Book Name: ");
    scanf("%s", b.name);

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("\nBook Details\n");
    printf("Name: %s\nID: %d\nAuthor: %s\nPrice: %.2f",
           b.name, b.id, b.author, b.price);
}