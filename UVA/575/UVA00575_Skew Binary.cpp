#include<string>
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    string number;
    long long ans = 0;
    while (cin >> number) {
        if (number.length() == 1 && number.at(0) == '0') break;
        int l = number.length();
        for (int i = 0; i < number.length(); i++) {
            ans += (number.at(i)-'0') * (pow(2, l) - 1);
            l--;
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}