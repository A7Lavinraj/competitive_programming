#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;
int binpow(long long base, long long power) {
    base %= MOD;
    long long res = 1;
    while (power > 0) {
        if (power & 1)
            res = res * base % MOD;
        base = base * base % MOD;
        power >>= 1;
    }
    return res;
}

int main() {
    cout << binpow(2, 3);
    return 0;
}