#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    

    int n;
    cin >> n;

    priority_queue<int> pq;

    for(int i=1; i<=n; i++){
        pq.push(i);
    }

    vector<pair<int,int>> v;

    while (pq.size() > 1)      
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        pq.push(ceil((a + b) / 2.0));
        v.push_back({a,b});
    }

    cout << pq.top() << endl;

    for(auto  x : v){
        cout << x.first << " " << x.second << endl;
    }
    
  }
  
  return 0;
}
