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

    vector<int> v(n);
    set<int> st;

    for(int i=0; i<n; i++){
        cin >> v[i];
        st.insert(v[i]);
    }

    int resultMin = -1;
    int resultMax = -1;

    int i=0, j=n-1;

    while (i<j )
    {
        int mn = *st.begin();
        int mx = *(--st.end());
        
        if(v[i] != mn && v[i] != mx && v[j] != mn && v[j] != mx ){
            resultMin = i+1;
            resultMax = j+1;
            break;
        }
        
        if(v[i] == mn || v[i] == mx){
            st.erase(v[i]);
            i++;
        }
        if( v[j] == mn || v[j] == mx){
            st.erase(v[j]);
            j--;
        }
    }

    if(resultMax == -1){
        cout << -1 << endl;
    }else{
        cout << resultMin << " " << resultMax << endl;
    }
    

  }
  


  return 0;
}
