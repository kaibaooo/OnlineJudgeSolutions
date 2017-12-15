#include<stdio.h>
int main(){
	int n = 0;
	int a,b;
	scanf("%d", &n);
	for(int j = 1;j<=n;j++){
		int sum = 0;
		scanf("%d%d", &a, &b);
		for(int i = a;i<=b;i++){
			if(i&1) sum+=i;
		}
		printf("Case %d: %d\n", j,  sum);
	}
	return 0;
}
