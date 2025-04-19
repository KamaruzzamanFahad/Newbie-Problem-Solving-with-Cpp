#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(n),b(m);

  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  for(int i=0; i<m; i++){
    cin >> b[i];
  }

  
  int l=0,r=0;
  long long ans =0;
  while (l<n && r<m)
  {
    int current = a[l],  count1 =0, count2 =0;

    while (l<n && current == a[l])
    {
      count1++; l++;
    }


    while (r<m && current > b[r])
    {
      r++;
    }

    while (r<m && current == b[r])
    {
      count2++; r++;
    }

    ans += (1LL * count1*count2);
    
  }

  cout << ans << endl;
  
  return 0;
}
