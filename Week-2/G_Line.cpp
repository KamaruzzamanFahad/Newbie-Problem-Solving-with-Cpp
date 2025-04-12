#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<long long> gain;
        long long base = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == 'L'){
                base += i;
                gain.push_back((n - i - 1) - i); // gain if we flip to R
            } else {
                base += (n - i - 1);
                gain.push_back(i - (n - i - 1)); // gain if we flip to L
            }
        }

        sort(gain.begin(), gain.end(), greater<long long>());

        vector<long long> res(n);
        long long current = base;
        for(int k = 0; k < n; k++){
            if(gain[k] > 0){
                current += gain[k];
            }
            res[k] = current;
        }

        for(auto x : res){
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
