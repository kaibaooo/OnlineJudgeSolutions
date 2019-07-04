#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char str[1001];
    int count[128] = { 0 };
    int cases = 0;
    

    while (fgets(str,1000,stdin)!=NULL){
        if (cases != 0){
            printf("\n");
        }
        
        for (int i = 0; i<strlen(str); i++){
            count[str[i]]++;
        }
        for (int i = 1; i<1001; i++){
            for (int j = 128; j >= 32; j--){
                if (count[j] == i){
                    printf("%d %d\n", j, count[j]);
                }
            }
        }
        for (int j = 0; j <128; j++) {
            count[j] = 0;
        }
        cases++;
    }
    return 0;
}