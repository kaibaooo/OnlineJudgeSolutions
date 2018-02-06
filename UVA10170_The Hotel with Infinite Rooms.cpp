#include<stdio.h>

int main() {
    long long int s = 0;
    long long int d = 0;
    while (scanf_s("%lld %lld", &s, &d) != EOF) {
        while (d - s > 0) {
            d -= s;
            s++;
        }
        printf("%lld\n", s);
    }
    return 0;
}