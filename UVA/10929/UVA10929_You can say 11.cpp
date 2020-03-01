#include<string>
#include<iostream>
#include<cmath>

using namespace std;

int main() {
	string num;
	
	while (getline(cin, num)) {
		if (num=="0") break;
		int length = num.length();
		int oddSum = 0;
		int evenSum = 0;
		for (int i = 0; i < length; i++) {
			if (i % 2 == 0) oddSum = oddSum + (int)num.at(i) - '0';
			else evenSum = evenSum + (int)num.at(i) - '0';
		}
		if (abs(oddSum - evenSum) % 11 == 0)
			cout << num << " is a multiple of 11." << endl;
		else
			cout << num << " is not a multiple of 11." << endl;
	}

	return 0;
}
