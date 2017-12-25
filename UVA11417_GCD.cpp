#include<stdio.h>
#include<stdlib.h>

int gcd(int a,int b){
	if(b) while((a%=b) && (b%=a));
	return a+b;	
}

int main() {
	int n = 0;
	while(scanf("%d", &n)){
		int G = 0;
		if(n==0) break;
		else{
			for(int i =1;i<n;i++){
				for(int j = i+1;j<=n;j++){
					G+=gcd(i,j);
				}
			}
		}
		printf("%d\n", G);
	}
	return 0;
}