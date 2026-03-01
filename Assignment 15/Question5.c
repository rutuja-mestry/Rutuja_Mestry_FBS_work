#include<stdio.h>
#include<string.h>

struct Movie {
    char title[20];
    char director[20];
    int year;
    char genre[20];
};

void main() {
    struct Movie m[5];
    int n, i;
    char search[20];

    printf("Enter number of movies: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        printf("\nEnter Movie %d:\n", i+1);
        scanf("%s%s%d%s",
              m[i].title,
              m[i].director,
              &m[i].year,
              m[i].genre);
    }

    printf("\nEnter movie title to search: ");
    scanf("%s", search);

    for(i=0;i<n;i++) {
        if(strcmp(m[i].title, search)==0) {
            printf("\nMovie Found!\n");
            printf("%s %s %d %s",
                   m[i].title,
                   m[i].director,
                   m[i].year,
                   m[i].genre);
        }
    }
}