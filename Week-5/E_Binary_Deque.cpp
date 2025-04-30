#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n,s;
    cin >> n >>s;
    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int l=0,r=0,ans =-1;
    long long int sum =0;

    while (r<n)
    {
        sum += a[r];

        while (sum > s && l<r)
        {
            sum-= a[l];
            l++;
        }
        if(sum == s){
            ans = max(ans, r-l+1);
        }
        r++;
    }

    cout << (ans == -1 ? -1 : (n-ans)) << endl;
    
  }
  
  return 0;
}
