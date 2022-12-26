#include <iostream>
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
#ifdef LAVIN_DEBUG
#define dbg(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; dbg(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...)
#endif