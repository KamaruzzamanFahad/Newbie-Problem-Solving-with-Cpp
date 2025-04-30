#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    string s;
    cin >> s;

    int l=0,r=0,sum=0, ans =0;
    vector<int>prefixSum;

    for(int i=0; i<n; i++){
        sum += v[i];
        prefixSum.push_back(sum);
    }
    

    while (r<n)
    {
        if(s[l] == 'L'){
            sum+= v[r];
            if(s[r] == 'R'){
                ans += sum;
                sum =0;
                l++;
                r++;
            }else{
                r++;
            }
        }else{
            l++;
            r++;
        }
    }
    cout << ans << endl;
    


  }
  
  return 0;
}
