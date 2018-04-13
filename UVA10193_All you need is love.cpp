#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
#include<cmath>
using namespace std;

int GCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int main() {
    int n;
    string num1;
    string num2;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++) {
        getline(cin, num1);
        getline(cin, num2);
        int first = 0;
        int second = 0;
        //check
        if (num1.at(0) == '0') {
            cout << "Pair #" << i+1 << ": Love is not all you need!" << endl;
            continue;
        }
        if (num2.at(0) == '0') {
            cout << "Pair #" << i+1 << ": Love is not all you need!" << endl;
            continue;
        }
        for (int j = 0; j < num1.length(); j++){
            if (num1.at(j) - '0') {
                first += pow(2, num1.length() - j - 1);
            }
                
        }
        for (int j = 0; j < num2.length(); j++) {
            if(num2.at(j) - '0')
                second += pow(2, num2.length() - j - 1);
        }
        if (GCD(first, second) > 1)
            cout << "Pair #" << i+1 << ": All you need is love!" << endl;
        else
            cout << "Pair #" << i+1 << ": Love is not all you need!" << endl;
    }
    return 0;
}