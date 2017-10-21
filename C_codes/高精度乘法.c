#include<stdio.h>
#include<string.h>

int main() {
    char num1[2000], num2[2000];
    int i = 0, j = 0;
    int num[2000];
    for (i = 0; i < 2000; i++) 
        num[i] = 0;
    scanf("%s%s", num1, num2);
    int len1 = strlen(num1), len2 = strlen(num2);
    int a[2000], b[2000];
    for (i = 0, j = len1 - 1; i < len1; i++, j--) 
        a[i] = num1[j] - '0';
    for (i = 0, j = len2 - 1; i < len2; i++, j--) 
        b[i] = num2[j] - '0';
    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) 
            num[i + j] += a[i] * b[j];
    }   
    for (i = 0; i < len1 + len2; i++) {
        if (num[i] >= 10) {
              num[i + 1] += num[i] / 10;
              num[i] %= 10;
        }
    }
    for (j = 1999; j > 0; j--) {
        if (num[j] != 0)  break;
    }
    for (i = j; i >= 0; i--) 
       printf("%d", num[i]);
    printf("\n");
    return 0;
}

