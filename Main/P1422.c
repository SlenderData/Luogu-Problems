#include<stdio.h>

int main() {
    int kWh;
    float money;
    scanf("%d", &kWh);
    money = kWh * 0.4463;
    kWh -= 150;
    if (kWh > 0) {
        money += (kWh * (0.4663 - 0.4463));
        kWh -= (400 - 150);
    }
    if (kWh > 0) money += (kWh * (0.5663 - 0.4663));
    printf("%.1f", money);
}