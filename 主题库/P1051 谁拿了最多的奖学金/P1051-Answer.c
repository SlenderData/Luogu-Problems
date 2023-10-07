#include<stdio.h>
#include<string.h>

struct student {
    char name[51];
    int qmscore, bjscore;
    char bgb[2], west[2];
    int paper;
    int money;
} stu[101];

int main() {
    int i, n, maxflag = -1, maxmoney = 0, total = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %d %d %s %s %d", stu[i].name, &stu[i].qmscore, &stu[i].bjscore, stu[i].bgb, stu[i].west,
              &stu[i].paper);
        stu[i].money = 0;
        if (stu[i].qmscore > 80 && stu[i].paper > 0) stu[i].money += 8000;
        if (stu[i].qmscore > 85 && stu[i].bjscore > 80) stu[i].money += 4000;
        if (stu[i].qmscore > 90) stu[i].money += 2000;
        if (stu[i].qmscore > 85 && !(strcmp(stu[i].west, "Y"))) stu[i].money += 1000;
        if (stu[i].bjscore > 80 && !(strcmp(stu[i].bgb, "Y"))) stu[i].money += 850;
        total += stu[i].money;
        if (maxmoney < stu[i].money) {
            maxmoney = stu[i].money;
            maxflag = i;
        }
    }
    printf("%s\n%d\n%d", stu[maxflag].name, stu[maxflag].money, total);
    return 0;
}