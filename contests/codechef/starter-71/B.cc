#include <bits/stdc++.h>
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
    int n;
	cin >> n;
	vector<int> chef(n), chefina(n);

	for (int &i : chef)
		cin >> i;

	for (int &i : chefina)
		cin >> i;

	int ans = 0, cnt = 0;

	for (int i = 0; i < n; i++) {
		if (chef[i] ^ 0 && chefina[i] ^ 0) {
			cnt++;
			ans = max(ans, cnt);
		}
		else {
			cnt = 0;
		}
	}

	print(ans);
}

int main() { 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	cin >> t;
 	for (int i = 1; i <= t; i++) {
		//cout << "Case #" << i << ": ";
        solve();
	}
	return 0;
}
