#include<stdio.h>

int main() {
    long count, x, n;
    count = 1;
    scanf("%ld %ld", &x, &n);
    while (n > 0) {
        count *= (x + 1);
        n -= 1;
    }
    printf("%ld", count);
}