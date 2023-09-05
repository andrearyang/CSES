#include <bits/stdc++.h>
using namespace std;

int main() {

	string a; cin >> a;
	int g = a.length(), best = 0, curr = 1;

	for (int i = 1; i < g; i++) 
	{
		if (a[i] != a[i-1]) {
			best = max(best, curr);
			curr = 1;
		} else {
			curr++;
		}
	}
	best = max(best, curr);
	cout << best;
	return 0;

}
