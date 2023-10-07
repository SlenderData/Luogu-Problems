#include<stdio.h>

int main() {
    int i, AppleHeight[10], TaotaoHeight, count = 0;
    for (i = 0; i < 10; ++i) {
        scanf("%d", &AppleHeight[i]);
    }
    scanf("%d", &TaotaoHeight);
    TaotaoHeight += 30;
    i = 0;
    while (i < 10) {
        if (AppleHeight[i] <= TaotaoHeight) count += 1;
        i += 1;
    }
    printf("%d", count);
}