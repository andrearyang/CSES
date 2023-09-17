#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t; 
	cin >> t;
	while (t--) 
	{
		ll y, x; 
		cin >> y >> x;

		ll z = max(y,x);
		ll z2 = z*z, curr;

		if (z%2 == 0) {
			if (z == y) {
				curr = z2 - x + 1;
			} else {
				curr = (x-1)*(x-1) + y;
			}
		} else {
			if (z==y) {
				curr = (y-1)*(y-1) + x;
			} else {
				curr = z2 - y + 1;
			}
		}

		cout << curr << endl;

	}
}
