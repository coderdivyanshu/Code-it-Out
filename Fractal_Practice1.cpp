#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
	ll n;
	while (cin >> n) {
		string s = "";
		ll a[200005];
		for (ll i = 0; i < n; i++) {
			cin >> a[i];
		}
		ll i = 0;
		ll j = n - 1;
		ll max = -1;
		if (a[i] < a[j]) {
			s += 'L';
			max = a[i];
			i++;
		}
		else {
			s += 'R';
			max = a[j];
			j--;
		}
		while (i < j) {
			if (max < a[i] && max < a[j]) {
				if (a[i] < a[j]) {
					s += 'L';
					max = a[i];
					i++;
				}
				else {
					s += 'R';
					max = a[j];
					j--;
				}
			}
			else if (max<a[i] && max>a[j]) {
				s += 'L';
				max = a[i];
				i++;
			}
			else if (max<a[j] && max>a[i]) {
				max = a[j];
				s += 'R';
				j--;
			}
			else {
				break;
			}
		}
		if (i == j && max < a[i]) {
			s += 'L';
		}


		cout << s.size() << endl << s << endl;
	}
}
