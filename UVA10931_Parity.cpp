#include<stdio.h>
int main() {
    int num = 0;
    int digit = 0;
    int binary[31];
    int one = 0;
    while (scanf("%d", &num)) {
        if (num == 0) break;
        for (int i = 0; num; i++) {
            binary[i] = num & 1;
            if (binary[i] == 1) one++;
            num >>= 1;
            digit++;
        }
        printf("The parity of ");
        for (int i = digit-1; i >= 0; i--) {
            printf("%d", binary[i]);
        }
        printf(" is %d (mod 2).\n", one);
        digit = 0;
        one = 0;
    }

    return 0;
}