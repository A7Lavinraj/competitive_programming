#include <bits/stdc++.h>
using namespace std;
#ifdef LAVIN_DEBUG
#include "/home/a7lavinraj/CARRIER_BUNDLE/cp/library/debug.cc"
#else
#define dbg(x...)
#endif

// Alias
#define ll long long
#define sz(a) (int)a.size()
#define all(c) (c).begin(), (c).end()

// Constants
const long double PI = atan(1) * 4;
const int MOD = 1e9+7;

void print(){cout << "\n";}
template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}
int lcm(int a, int b){return (a*b)/__gcd(a, b);}
int _log(int a, int b){return log2(a)/log2(b);}

void solve(){
    int n;
    string a, b;
    cin >> n >> a >> b;

    int cnt1 = count(all(a), '1');
    int cnt2 = count(all(b), '1');

    if (cnt1 == cnt2) print("YES");
    else print("NO");
}

int main() { 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1, i = 1;
	cin >> t;
 	while(t--) {
        #ifdef LAVIN_DEBUG
        cout << "\nTestCase #" << i++ << ": ";
        solve();
        #else
		//cout << "Case #" << i++ << ": ";
        solve();
        #endif
	}

	return 0;
}
