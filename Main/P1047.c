#include<stdio.h>

int main() {
    int l, m, i, u, v, count = 0;
    scanf("%d %d", &l, &m);
    int L[l + 1];
    for (i = 0; i <= l; i++) L[i] = 1;
    while (m > 0) {
        scanf("%d %d", &u, &v);
        while (u <= v) {
            L[u] = 0;
            u += 1;
        }
        m -= 1;
    }
    for (i = 0; i <= l; i++) {
        if (L[i] == 1) count += 1;
    }
    printf("%d", count);
}