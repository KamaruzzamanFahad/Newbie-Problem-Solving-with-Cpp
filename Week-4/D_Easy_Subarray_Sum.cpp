#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main(){
  ll t; 
  cin >> t;

  while (t--)
  {
    ll n,result =0, sum =0;
    cin >> n;

    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        if(x <0){
            result++;
        }else if(x>0){

            sum+=x;
        }
    }
    cout << (sum > 0 ? result : 0) << endl;
  }
  
  return 0;
}
