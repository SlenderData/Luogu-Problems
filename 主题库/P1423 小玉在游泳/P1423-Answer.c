#include<stdio.h>

int main() {
    int StepCount;
    float StepLength, s;
    StepLength = 2;
    StepCount = 0;
    scanf("%f", &s);
    do {
        s -= StepLength;
        StepCount += 1;
        StepLength *= 0.98;
    } while (s > 0);
    printf("%d", StepCount);
}