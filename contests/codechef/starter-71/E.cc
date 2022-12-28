#include <bits/stdc++.h>
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
    int n, k;
	string s;
	cin >> n >> k >> s;
	
	vector<int> v(n);
	int cnt = 0, ans = INT_MAX;

	for (int i = 1; i < n; i++) {
		if (s[i - 1] ^ s[i]) {
			v[i] = ++cnt;
		}
		else v[i] = cnt;
	}

	for (int i = n - 1; i >= 0; i--) {
		if (i - (k - 1) < 0)
			break;
		int ok = v[i] - v[i - (k - 1)];
		if (s[i] == '0')
			ok++;
		ans = min(ans, ok);
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
