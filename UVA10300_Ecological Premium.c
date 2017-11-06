#include<stdio.h>
#include<stdlib.h>

int main() {
	int n = 0;
	int farmer = 0;
	int sum = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &farmer);
		for (int j = 0; j < farmer; j++) {
			int a = 0, b = 0, c = 0;
			
			scanf_s("%d %d %d", &a, &b, &c);
			sum =sum + a*c;
		}
		printf("%d\n", sum);
		sum = 0;
	}
	//system("pause");
	return 0;
}