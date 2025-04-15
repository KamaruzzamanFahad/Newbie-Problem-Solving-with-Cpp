#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t; 

  while (t--)
  {
    int n,w;
    cin >> n >> w;
    multiset<int, greater<int>>st;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        st.insert(x);
    }

    int height =1;
    vector<int> spaceLavel;

    for(auto x : st){
        bool done = false;

            for(int i=0; i< spaceLavel.size();){
                if(spaceLavel[i] + x <= w ){
                    spaceLavel[i] += x;
                    done = true;
                }else{
                    height++;
                    i++;
                }
            }

            if(!done){
                spaceLavel.push_back(x);
            }
        
        
    }

    cout << height << endl;


  }
  
  return 0;
}
