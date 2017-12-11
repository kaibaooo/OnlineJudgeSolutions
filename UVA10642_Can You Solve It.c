#include<stdio.h>

int main() {
    int n = 0;
    int ax, ay, bx, by;
    int sum_a = 0, sum_b = 0;
    scanf("%d", &n);
    for (int k = 1; k <= n;k++) {
        scanf("%d %d %d %d", &ax, &ay, &bx, &by);
        sum_a = ax + ay;
        sum_b = bx + by;
        //同一層時
        if (sum_a == sum_b) {
            printf("Case %d: %d\n", k, ax - ay);
            continue;
        }
        //不同層時
        int diff = sum_b - sum_a;
        int diffSum = 0;
        for (int i = sum_a; i < sum_b; i++) {
            diffSum += i;
        }
        diffSum += diff;
        int ans = diffSum - ax + bx;
        printf("Case %d: %d\n", k, ans);
        sum_a = 0;
        sum_b = 0;
    }
    return 0;
}
