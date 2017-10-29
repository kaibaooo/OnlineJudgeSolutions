#include<stdio.h>
int main() {
	unsigned long long int a = 0;
	unsigned long long int b = 0;
	while(scanf("%llu %llu", &a, &b )!= EOF){
		if (a > b)
			printf("%llu\n", a - b);
		else
			printf("%llu\n", b - a);
	}
	return 0;
}
