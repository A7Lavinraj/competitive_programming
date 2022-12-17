#include <bits/stdc++.h>
#ifdef LAVIN_DEBUG
#include "/home/a7lavinraj/CARRIER_BUNDLE/cp/library/debug.cc"
#else
#define dbg(x...)
#endif
using namespace std;

// Alias
#define ll long long
#define sz(a) (int)a.size()
#define all(c) (c).begin(), (c).end()

// Constants
const long double PI = atan(1) * 4;
const int MOD = 1e9+7;

// personal variadic funtion
void print(){cout << "\n";}
template<typename T, typename...types>
void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

// LCM
int lcm(int a, int b){
	return (a*b)/__gcd(a, b);
}

//log(a) to the base (b)
int _log(int a, int b){
	return log2(a)/log2(b);
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll &i : v) cin >> i;
    auto mx = [&](vector<ll> &vt) {
        pair<ll, ll> pr;
        for (int i = 0; i < sz(vt); i++) {
            if (i > pr.first) {
                pr.first = i;
                pr.second = i;
            }
        }
        return pr;
    };
    pair<ll, ll> pr = mx(v);
    vector<ll> temp(n - 1);
    for (int i = 1; i < n; i++) {
        temp[i - 1] = v[i];
    }

    sort(all(temp));
    if (pr.second == 0) print(v[0]);
    else {
        ll a = v[0];
        for (int i = 0; i < n - 1; i++) {
            if (temp[i] > a) {
                ll z = a + temp[i];
                a = (z & 1 ? z / 2 + 1 : z / 2);
            }
        }
        print(a);
    }
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
