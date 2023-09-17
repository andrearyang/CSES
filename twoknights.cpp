#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

	ll input; cin >> input;

	for (ll i = 1; i <= input; i++) {

		if (i == 1) {
			cout << 0 << endl;
		} else {
			ll mx; mx = (i * i * (i * i - 1))/2;
			ll unvalid = 4 * ((i - 1) * (i - 2));
			cout << mx - unvalid << endl;
		}
	}

	return 0;
}
