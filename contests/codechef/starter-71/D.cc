#include <bits/stdc++.h>
using namespace std;
void DBG(int x) {cerr << x;}
void DBG(long x) {cerr << x;}
void DBG(long long x) {cerr << x;}
void DBG(unsigned x) {cerr << x;}
void DBG(unsigned long x) {cerr << x;}
void DBG(unsigned long long x) {cerr << x;}
void DBG(float x) {cerr << x;}
void DBG(double x) {cerr << x;}
void DBG(long double x) {cerr << x;}
void DBG(char x) {cerr << '\'' << x << '\'';}
void DBG(const char *x) {cerr << '\"' << x << '\"';}
void DBG(const string &x) {cerr << '\"' << x << '\"';}
void DBG(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>void DBG(const pair<T, V> &x);
template<typename T>void DBG(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), DBG(i); cerr << "}";}
template<typename T, typename V>void DBG(const pair<T, V> &x) {cerr << '{'; DBG(x.first); cerr << ", "; DBG(x.second); cerr << '}';}
void dbg() {cerr << "]\n";}template <typename T, typename... V>void dbg(T t, V... v) {DBG(t); if (sizeof...(v)) cerr << ", "; dbg(v...);}
#ifdef RECB
#define dbg(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; dbg(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...)
#endif
void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
	int n;
	string s;
	cin >> n >> s;
	string temp = s;
	reverse(s.begin(), s.end());

	vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (temp[i - 1] == s[j - 1]) {
				v[i][j] = v[i - 1][j - 1] + 1;
			}
			else {
				v[i][j] = max(v[i - 1][j], v[i][j - 1]);
				//dbg(v[i][j]);
			}
		}
	}

	print(v[n][n] / 2);
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
