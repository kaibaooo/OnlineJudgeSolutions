#include<stdio.h>
#include<stdlib.h>

int main() {
    int high = 0;
    int low = 0;
    int n = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int k = 0;
        scanf("%d", &k);
        int last = 0;
        scanf("%d", &last);
        k--;
        while (k--) {
            int tmp = 0;
            scanf("%d", &tmp);
            if (tmp - last > 0) high++;
            else if (tmp - last < 0) low++;
            last = tmp;
        }
        printf("Case %d: %d %d\n",i, high, low);
        high = 0;
        low = 0;
    }
    return 0;
}