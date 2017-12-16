#include<cstdio>
#include<cstdlib>
#include<vector>

using namespace std;

int main() {
    vector<int> f;
    f.push_back(0);
    f.push_back(1);
    for (int i = 2; i < 47; i++) {
        f.push_back(f.at(i - 1) + f.at(i - 2));
    }

    int times;
    scanf("%d", &times);
    while (times--) {
        int n;
        scanf("%d", &n);
        bool find = false;
        printf("%d = ", n);
        for (int i = 46; i > 1; i--) {
            if (f.at(i) <= n) {
                printf("1");
                n -= f.at(i);
                find = true;
            }
            else if (find) printf("0");

        }
        printf(" (fib)\n");
    }
    return 0;
}
