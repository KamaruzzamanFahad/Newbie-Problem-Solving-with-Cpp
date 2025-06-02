#include<bits/stdc++.h>
using namespace std;

int main(){
    
  int n,k;
  cin >> n >> k;
  vector<int> v(n);

  for(int i=0; i<n; i++){
    cin >> v[i];
  }

  for(int i=0; i<k; i++){
    int q;
    cin >> q;

    int l=0, r=n-1, mid;
    bool isExist = false;

    while (l<=r)
    {
        mid=((l+r)/2);

        if(v[mid] == q){
            cout << "YES" << endl;
            isExist = true;
            break;
        }else if(q < v[mid]){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
     
    if(!isExist){
        cout << "NO" << endl;
    }
    
  }

  return 0;
}
