#include <bits/stdc++.h>
using namespace std;

int main() {

	long long g; cin >> g;
	int s[g];
	for (int i = 0; i < g; i++) {
		cin >> s[i];
	}
	long long output, print = 0;
	
	for (int i = 1; i < g; i++) {
		if (s[i] < s[i-1]) {
			output = s[i-1] - s[i];
			s[i] = s[i-1];
			print = print + output;
		} 
	}

	cout << print;
	return 0;

}
