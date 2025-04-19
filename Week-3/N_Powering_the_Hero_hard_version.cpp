#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    priority_queue<int>bonus;
    long long int army =0;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        if(x == 0){
            if(!bonus.empty()){
                int topcart = bonus.top();
                bonus.pop();
                army+= topcart;
            }
        }else if(x > 0){
            bonus.push(x);
        }
    }

    cout << army << endl;
  }
  
  return 0;
}