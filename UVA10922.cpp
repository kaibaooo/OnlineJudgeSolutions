#include<string>
#include<iostream>
#include<cmath>
using namespace std;

int f(int n) {
    int sum_n = 0;
    if (n == 9) return 1;
    else {
        int digit_n = (int)log10(n) + 1;
        
        for (int k = 0; k < digit_n; k++) {
            sum_n += n % 10;
            n /= 10;
        }
        return 1+f(sum_n);
    }
    
}

int main() {
    string num;
    
    while (1) {
        getline(cin, num);
        int sum = 0;
        int digit = num.length();
        if (digit == 1 && num.at(0) == '0') break;
        for (int i = 0; i < digit; i++) {
            sum += num.at(i) - '0';
        }
        if (sum % 9 == 0) {
            cout << num << " is a multiple of 9 and has 9-degree " << f(sum) << "."<< endl;
        }
        else {
            cout << num << " is not a multiple of 9" << "." << endl;
        }
        num.clear();
        
    }
    return 0;
}
