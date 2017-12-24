#include<stdio.h>

int main() {
    int k, m, n;
    int x, y;

    while (scanf("%d", &k)) {
        if (k == 0) break;
        scanf("%d %d", &x, &y);
        while (k--) {
            scanf("%d%d", &m, &n);
            if (m > x && n > y) printf("NE\n");
            else if (m<x && n>y) printf("NO\n");
            else if (m>x && n<y) printf("SE\n");
            else if (m<x && n<y)printf("SO\n");
            else printf("divisa\n");
        }
    }
    return 0;
}
