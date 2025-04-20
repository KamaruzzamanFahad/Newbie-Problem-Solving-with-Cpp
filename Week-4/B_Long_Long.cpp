#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int sum =0;
    int oparations =0;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        sum += abs(x);

        if(x < 0){
            oparations++;
        }

    }
    cout << sum << " " << oparations << endl;

    
  }
  
  return 0;
}
