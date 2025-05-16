#include<bits/stdc++.h>
using namespace std;

int buildAndSum(vector<int>& tree, int N) {
    int total_nodes = (1 << (N + 1)) - 1;
    for (int i = (1 << N) - 2; i >= 0; --i) {
        tree[i] = min(tree[2 * i + 1], tree[2 * i + 2]);
    }
    return accumulate(tree.begin(), tree.end(), 0);
}

string solve(int N, int K) {
    int leaf_count = (1 << N);
    int total_nodes = (1 << (N + 1)) - 1;

    for (int mask = 0; mask < (1 << leaf_count); ++mask) {
        vector<int> tree(total_nodes, 0);
        for (int i = 0; i < leaf_count; ++i) {
            int bit = (mask >> i) & 1;
            tree[(1 << N) - 1 + i] = bit;
        }

        int sum = buildAndSum(tree, N);
        if (sum == K) {
            string res = "";
            for (int i = 0; i < leaf_count; ++i) {
                res += ((mask >> i) & 1) ? '1' : '0';
            }
            return res;
        }
    }

    return "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        string ans = solve(N, K);
        if (ans == "NO") {
            cout << "No\n";
        } else {
            cout << "Yes\n" << ans << '\n';
        }
    }

    return 0;
}
