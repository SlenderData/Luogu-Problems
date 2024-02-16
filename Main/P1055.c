#include<stdio.h>

int main() {
    char strISBN[14];
    int i, sum, check;
    int numISBN[10];
    sum = 0;
    scanf("%s", strISBN);
    numISBN[0] = strISBN[0] - '0';
    numISBN[1] = strISBN[2] - '0';
    numISBN[2] = strISBN[3] - '0';
    numISBN[3] = strISBN[4] - '0';
    numISBN[4] = strISBN[6] - '0';
    numISBN[5] = strISBN[7] - '0';
    numISBN[6] = strISBN[8] - '0';
    numISBN[7] = strISBN[9] - '0';
    numISBN[8] = strISBN[10] - '0';
    if (strISBN[12] == 'X') numISBN[9] = 10;
    else numISBN[9] = strISBN[12] - '0';
    for (i = 1; i <= 9; i++) sum += (numISBN[i - 1] * i);
    check = sum % 11;
    if (check == numISBN[9]) printf("Right");
    else {
        if (check == 10) strISBN[12] = 'X';
        else strISBN[12] = check + '0';
        printf("%s", strISBN);
    }
    return 0;
}