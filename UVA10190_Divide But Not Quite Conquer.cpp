#include<stdio.h>
#include<vector>

int main() {
    long long int n, m;
    std::vector<long long int> sequence;
    while (scanf("%lld %lld", &n, &m) != EOF) {
        if (n == 0 || m == 0) {
            printf("Boring!\n");
            continue;
        }
        else if (n == 1 && m == 1) {
            printf("Boring!\n");
            continue;
        }
        else if (n < m) {
            printf("Boring!\n");
            continue;
        }
        else if (m == 1 && n != 1) {
            printf("Boring!\n");
            continue;
        }
        else if (n == m) {
            sequence.push_back(m);
            sequence.push_back(1);
            n /= m;
        }
        else {
            while ((n%m) == 0) {
                sequence.push_back(n);
                n /= m;
            }
            sequence.push_back(1);
        }
        if (sequence.size() > 0 && n*m == m) {
            for (int i = 0; i < sequence.size()-1; i++) {
                printf("%d ", sequence.at(i));
            }
            printf("%d", sequence.at(sequence.size()-1));
        }
        else {
            printf("Boring!");
        }
        printf("\n");
        sequence.clear();
    }
    return 0;
}
