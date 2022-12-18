class sieve {
    vector<bool> prime_bool;

    public:
    sieve (int N = 1000) {
        vector<bool> temp(N, true);
        temp[0] = temp[1] = false;
        for (int i = 2; i <= N; i++) {
            if (temp[i] && (long long)i * i <= N) {
                for (int j = i * i; j <= N; j += i)
                    temp[j] = false;
            }
        }
        prime_bool = temp;
    }

    bool is_prime(int n) {
        return prime_bool[n];
    }

    vector<int> upto() {
        vector<int> arr;
        for (int i = 0; i < (int)prime_bool.size(); i++) {
            if (prime_bool[i])
                arr.push_back(i);
        }
        return arr;
    }
};
