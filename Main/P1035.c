#include<stdio.h>

int main() {
    double n = 1, s = 1;
    int k;
    scanf("%d", &k);
    do {
        n += 1;
        s += (1 / n);
    } while (s < k);
    printf("%d", (int) n);
}