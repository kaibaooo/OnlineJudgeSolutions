#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
int main() {
    int n, m;
    int i, j;
    int sumN = 0;
    while (scanf("%d %d", &n, &m)) {
        if (n == 0 && m == 0) break;
        int *numN = (int*)malloc(sizeof(int) * n);
        int *numM = (int*)malloc(sizeof(int) * m);
        for (i = 0; i < n; i++) {
            scanf("%d", &numN[i]);
            sumN += numN[i];
        }
        for (j = 0; j < m; j++) {
            scanf("%d", &numM[j]);
        }
        std::sort(numN, numN + n);
        std::sort(numM, numM + m);
        int sum = 0;
        for (i = 0,j = 0; i < n && j < m;) {
            if (numM[j] >= numN[i]) {
                sum += numM[j];
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        if (sum >= sumN)
            printf("%d\n", sum);
        else
            printf("Loowater is doomed!\n");
        sumN = 0;
    }
    return 0;
}

