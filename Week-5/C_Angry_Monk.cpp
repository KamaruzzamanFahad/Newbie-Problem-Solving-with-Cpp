#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n,k;
    cin >> n >>k;
    vector<int> v(k);

    for(int i=0; i<k; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    int one =0, ans=0;

    for(int i=0; i<k-1; i++){
        if(v[i] > 1){
            one += v[i];
            ans += v[i]-1;
        }else{
            one++;
        }
    }

    cout << ans+one << endl;


  }
  
  return 0;
}
