#include<stdio.h>

int main() {
	int nums[3001] = {0};
	int sum = 0;
	int n = 0;
	int digits = 1;
	nums[0] = 1;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < 3001; i++) {
			nums[i] = 0;
		}
		nums[0] = 1;
		sum = 0;
		digits = 1;
    //BigInt Multiply Calculate
		for (int k = 1; k <= n; k++) {
			for (int i = 0; i < digits; i++) {
				nums[i] = nums[i] * k;
			}
			for (int i = 0; i < digits + 1; i++) {
				if ((nums[digits - 1]) >= 10) {
					digits++;
				}
				if (nums[i] >= 10) {
					nums[i + 1] = nums[i + 1] + nums[i] / 10;
					nums[i] = nums[i] % 10;
				}
			}
		}
    
		for (int i = digits - 1; i >= 0; i--) {
			sum += nums[i];
		}
		printf("%d\n", sum);
	}
	return 0;
}
