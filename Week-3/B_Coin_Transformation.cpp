#include<bits/stdc++.h>
using namespace std;

map<long long int , long long int> dp;

int mxcoin(long long int n){
    if(n <=3) return 1;
    if(dp.count(n)) return dp[n];

    long long int haf = (n/4);
    dp[n] = 2* mxcoin(haf);
    return dp[n];
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 long long int  t;
  cin >> t; 

  while (t--)
  {
    long long int n;
    cin  >> n;

    cout << mxcoin(n) << endl;
  }
  
  return 0;
}