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

bool cmp(pair<string, int>& a, pair<string, int>& b) {
    return a.second < b.second;
}

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> frequencey;

    for (int &i : v) {
        cin >> i;
        frequencey[i]++;
    }

    int sum = 0;

    for (auto i : frequencey) {
        if (i.second % i.first != 0) {
            print(-1);
            return;
        }
    }

    int value = 1;

    for (auto i : frequencey) {
        int cnt = 0;
        for (int &j : v) {

            if (cnt == i.first) {
                cnt = 0;
                value++;
            }
            if (j == i.first) {
                j = value;
                cnt++;
             
            }
        }
    }

    for (int i : v)
        cout << i << ' ';
    print();
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
