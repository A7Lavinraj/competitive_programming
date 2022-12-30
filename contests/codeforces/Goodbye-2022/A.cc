#include <bits/stdc++.h>
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int &i : a)
    	cin >> i;

    for (int &i : b)
    	cin >> i;

    auto change = [&](int value) {
    	int index = 0;
    	for (int i = 0; i < n; i++) {
    		if (a[i] < a[index])
    			index = i;
    	}

    	a[index] = value;
    };

    for (int i = 0; i < m; i++) {
    	change(b[i]);
    }

    print(accumulate(a.begin(), a.end(),0LL));
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
