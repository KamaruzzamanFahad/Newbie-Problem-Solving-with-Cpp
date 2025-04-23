#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main(){
  ll t;
  cin >> t;

  while (t--)
  {
    ll a,b,c;
    cin >> a >> b >> c;

    int firstLift = abs(a-1);
    int secondLift = abs(b-c) + abs(c-1);

    if( firstLift < secondLift) cout << 1 << endl;
    else if(firstLift > secondLift) cout << 2 << endl;
    else cout << 3 << endl;
  }
  
  return 0;
}
