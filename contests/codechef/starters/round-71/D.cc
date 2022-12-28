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

int lcs(string &a, string &b, int m, int n ) { 
    if (m == 0 || n == 0) 
        return 0; 
    if (a[m-1] == b[n-1]) 
        return 1 + lcs(a, b, m-1, n-1); 
    else
        return max(lcs(a, b, m, n-1), lcs(a, b, m-1, n)); 
} 

void solve(){
	int n;
	string s;
	cin >> n >> s;
	//int first = 0, second = 0, cnt = 0;
	//string a = s.substr(0, n / 2), b = s.substr(n / 2, n);
	//reverse(b.begin(), b.end());
	//print(lcs(a, b, (int)a.size(), (int)b.size()));
	// while (first < (int)a.size() && second < (int)b.size()) {
	// 	if (a[first] == b[second]) {
	// 		first++, second++, cnt++;
	// 	}
	// 	else {
	// 		second++;
	// 	}
	// }

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
