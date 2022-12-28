#include <bits/stdc++.h>
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
    int n;
	cin >> n;
	unordered_map<int, int> mp;

	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;
		mp[val]++;
	}

	for (auto i : mp) {
		if (i.second & 1) {
			print("NO");
			return;
		}
	}
	
	print("YES");
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
