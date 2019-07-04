#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    while (a--) {
        int i, j;
        scanf("%d %d", &i, &j);
        if (i>j) 
            printf(">\n");
        else if (i<j) 
            printf("<\n");
        else 
            printf("=\n");
    }
    return 0;
}