#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int result =0;
    for(int i=1; i<=n; i++){
        if(i%7 == 2){
            result++;
        }
    }

    cout << result << endl;
  }
  
  return 0;
}
