#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
int main() {
    int n = 0;
    int max = -1, min = 30001;

    scanf("%d", &n);
    while (n--) {
        int k;
        
        int sum = 0;
        scanf("%d", &k);
        int *nums = (int*)malloc(sizeof(int) * k);
        for (int i = 0; i < k;i++) {
            scanf("%d", &nums[i]);
            
        }
        std::sort(nums, nums + k);
        for (int i = 0; i < k; i++) {
            sum += abs(nums[i] - nums[k / 2]);
        }
        printf("%d\n", sum);
        max = -1;
        min = 30001;
        sum = 0;
        free(nums);
    }
    return 0;
}
