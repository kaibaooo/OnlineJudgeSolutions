#include<stdio.h>
#include<stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    getchar();
    for (int i = 1; i <= n; i++) {
        int size = 0;
        scanf("N = %d", &size);
        getchar();
        long long *matrix = (long long*)malloc(sizeof(long long) * size * size);
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                scanf("%lld", (matrix + j*size + k));
            }
        }
        getchar();
        int flag = 1;
        if (size == 1 && *(matrix) < 0) {
            printf("Test #%d: Non-symmetric.\n", i);
            continue;
        }
        if (size == 1 && *(matrix) >=0) {
            printf("Test #%d: Symmetric.\n", i);
            continue;
        }
        if (size % 2 == 1) {
            int mid = size*size / 2;
                for (int a = 0; a < mid; a++) {
                if (*(matrix + a) == *(matrix + (size*size - 1 - a))){
                    if (a == mid - 1 && *(matrix + mid) <=0) {
                        flag = 0;
                        break;
                    }
                    continue;
                }
                else {
                    flag = 0;
                    break;
                }

            }
        }
        else {
            int mid = size*size / 2 - 1;
            for (int a = 0; a <= mid; a++) {
                if (*(matrix + a) == *(matrix + (size*size-1 - a))) {
                    continue;
                }
                else {
                    flag = 0;
                    break;
                }
            }
        }
        
        if (flag) {
            printf("Test #%d: Symmetric.\n", i);
        }
        else {
            printf("Test #%d: Non-symmetric.\n", i);
        }
    }

    return 0;
}