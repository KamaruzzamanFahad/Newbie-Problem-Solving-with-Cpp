#include<bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
  int n;
  ll odd = INT_MAX;
  cin >> n;
  vector<ll> num(n);
  
  for(int i=0; i<n; i++){
    cin >> num[i];
    if(num[i]%2==1){
        odd = min(odd,num[i]);
    }
  }
  

  ll sum=0;
  for(int i=0; i<n; i++){
    sum+= num[i];
  }

  
    if(sum%2 == 0){
        cout << sum;
    }else{
        sum-= odd;
        cout << sum;
    }
  

  return 0;
}
