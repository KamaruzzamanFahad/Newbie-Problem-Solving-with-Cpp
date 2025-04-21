#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    long long int sum =0;
    int oparations =0;
    vector<int> v(n);

    for(int i=0; i<n; i++){
      cin >> v[i];
      sum += abs(v[i]);
    }
int i=0;
    while(i <n){
        
        if (v[i] < 0) {
          oparations++;

          while (i < n && v[i] <= 0) {
              ++i;
          }

      } else {
          ++i;
      }

    }
    cout << sum << " " << oparations << endl;

    
  }
  
  return 0;
}
