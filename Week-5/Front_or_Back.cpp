#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int front_candidates = 0;
    int back_candidates = 0;
    int flexible = 0;

    for (int i = 0; i < N; ++i) {
        if (A[i] == 0) {
            front_candidates++;
        }
        if (A[i] == N - 1) {
            back_candidates++;
        }
        if (A[i] == N - 1 - A[i]) {
            flexible++;
        }
    }

    if (front_candidates > 1 || back_candidates > 1) {
        return 0;
    }

    long long result = 1;
    for (int i = 0; i < flexible; ++i) {
        result = (result * 2) % MOD;
    }


        cout << result << '\n';
    }

    return 0;
}