#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  multiset<int> ms;

  for(int i=0; i<n; i++){
    int x;
    cin >> x;
    ms.insert(x);
  }
int day=0;
  for(int j=1; j<=n; j++){
    auto it = ms.lower_bound(j);

    if(it != ms.end()){
      day++;
      ms.erase(it);
    }
  }
  cout << day << endl;
  return 0;
}
