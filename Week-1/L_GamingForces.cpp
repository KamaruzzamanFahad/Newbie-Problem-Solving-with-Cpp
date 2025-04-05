#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int n,count=0;
    cin >> n;
    vector<int> monst(n);
    int one =0;

    for(int i=0; i<n; i++){
       cin >> monst[i];
    }

    sort(monst.begin(),monst.end());

    for(int i=0; i<n; i++){
        if(monst[i] == 1){
            one++;
        }else{
            count++;
        }
     }
    int result = ceil(one/2.0) + count;
    

    cout << result << endl;
    
  }
  return 0;
}
