#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {94, -33, -13, 40, -82, 94, -33, -13, 40, -82,
    };
    int k = 52;

    int n = arr.size();

    int l=0,r=0, sum =0, ans = 0;
    vector<int> v;

    for(int i=0; i<n; i++){
        sum+= arr[i];
        v.push_back(sum);
    }

    for(auto x : v){
        cout << x-k << " ";
    }

    // while (r<n)
    // {
    //     sum += arr[r];

    //     if(sum == k){
    //         ans = max(ans, r-l+1);
    //     }

    //     // while (sum > k)
    //     // {
    //     //     sum -= arr[l];
    //     //     l++;
    //     // }

    //     r++;
    // }

    // cout << ans << endl;
    
  
  return 0;
}
