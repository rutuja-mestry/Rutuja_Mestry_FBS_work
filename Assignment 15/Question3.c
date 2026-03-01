#include <stdio.h>

struct Player {
    char name[20];
    int matches;
    int runs;
    int wickets;
};

void accept(struct Player p[], int n) {
    for(int i=0;i<n;i++) {
        printf("\nEnter Player %d Details\n", i+1);
        scanf("%s%d%d%d", p[i].name,
              &p[i].matches,
              &p[i].runs,
              &p[i].wickets);
    }
}

void display(struct Player p[], int n) {
    for(int i=0;i<n;i++) {
        printf("\nName: %s\nMatches: %d\nRuns: %d\nWickets: %d\n",
               p[i].name, p[i].matches,
               p[i].runs, p[i].wickets);
    }
}

void maxStats(struct Player p[], int n) {
    int maxRun = 0, maxWicket = 0;

    for(int i=1;i<n;i++) {
        if(p[i].runs > p[maxRun].runs)
            maxRun = i;
        if(p[i].wickets > p[maxWicket].wickets)
            maxWicket = i;
    }

    printf("\nPlayer with Maximum Runs: %s (%d runs)\n",
           p[maxRun].name, p[maxRun].runs);

    printf("Player with Maximum Wickets: %s (%d wickets)\n",
           p[maxWicket].name, p[maxWicket].wickets);
}

void main() {
    struct Player p[10];

    accept(p,10);
    display(p,10);
    maxStats(p,10);
}