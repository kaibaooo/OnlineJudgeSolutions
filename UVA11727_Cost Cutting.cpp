#include<stdio.h>

int main() {
    int salary[3];
    int n = 0;
    scanf("%d", &n);
    for(int cases = 1;cases<=n;cases++) {
        scanf("%d %d %d", &salary[0], &salary[1], &salary[2]);
        int max = 999;
        int min = 10001;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                if (salary[j] > salary[j + 1]) {
                    int tmp = salary[j];
                    salary[j] = salary[j + 1];
                    salary[j + 1] = tmp;
                }
            }
        }
        printf("Case %d: %d\n", cases, salary[1]);
        
	}
    return 0;
}