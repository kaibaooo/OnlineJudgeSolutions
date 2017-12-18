#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	string country[2001];
	int n = 0;
	string trash;
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> country[i];
		getline(cin, trash);
	}

	sort(country, country + n);
	
	for (int i = 0; i < n; i++) {
		int j = 0;
		int count = 0;
		string nowSearch = country[i];
		cout << nowSearch;
		for (j = i; j < n; j++) {
			if (nowSearch != country[j]) break;
			else count++;
		}
		cout << " " << count << endl;
		i = j - 1;
	}
	

	return 0;
}
