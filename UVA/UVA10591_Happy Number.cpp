#include<stdio.h>
#include<stdlib.h>


int func(int k) {
    int sum = 0;
    while (k) {
        sum += (k % 10) * (k % 10);
        k /= 10;
    }
    return sum;
}

int main() {
    int cases = 0;
    int record[700];
    int temp = 0;
    scanf_s("%d", &cases);
    for (int j = 1; j <= cases;j++) {
        int count = 0,flag = 0;
        int num = 0;
        scanf_s("%d", &num);
        temp = num;
        while (num != 1) {
            
            record[count] = num;
            num = func(num);
            for (int idx = 0; idx <= count; idx++) {
                if (record[idx] == num) {
                    flag = 1;
                    break;
                }
            }
            if (flag) {

                printf("Case #%d: %d is an Unhappy number.\n",j, temp);
                break;
            }
            count++;
        }
        if(num == 1) 
            printf("Case #%d: %d is a Happy number.\n",j, temp);
    }
    return 0;
}