#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  while(n--){
    int q;
    cin >> q;

    vector<int> whel(q);
    for(int i=0; i<q;i++){
        cin >> whel[i]; 
    }

    for(int i=0; i<q;i++){
        int num;
        string s;
        cin >> num;
        cin >> s;

        for(char c : s){
            if(c == 'D'){
                whel[i] = (whel[i] + 1) % 10;
            }else{
                whel[i] = (whel[i] - 1 + 10) % 10;
            }
        }
    }

    for(auto c : whel){
        cout << c << " ";
    }
    cout << endl;
  }
  
  return 0;
}
