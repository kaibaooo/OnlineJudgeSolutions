#include<stdio.h>
#include<math.h>
int main() {
    long long a = 0, b = 0;
    int carry = 0, last_carry = 0;
    while (scanf("%lld %lld", &a, &b)) {
        last_carry = 0;
        if (a == 0 && b == 0) break;
        while (a || b) {
            if ((a % 10 + b % 10 + last_carry) / 10) {
                carry++;
                last_carry = (a % 10 + b % 10 + last_carry) / 10;
            }
            else
                last_carry = 0;
            a /= 10;
            b /= 10;
        }

        if (!carry)
            printf("No carry operation.\n");
        else
            if (carry == 1)
                printf("%d carry operation.\n", carry);
            else
                printf("%d carry operations.\n", carry);
        carry = 0;
    }
    return 0;
}
