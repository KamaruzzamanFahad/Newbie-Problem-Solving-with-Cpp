#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string result;
    int i = n - 1;

    while(i>=0){

        

        if(s[i] == '0'){
            if (i >= 2){
                int digit1 = s[i-2] - '0'; 
                int digit2 = s[i-1] - '0';
                int num = digit1 * 10 + digit2;
                    result.push_back(char(96+ num));
                    
                    i-=3;
            }
           
        }else{
            result.push_back(char(96 + (s[i] - '0')));
            i--;
        }
    }
    reverse(result.begin(), result.end());
    cout << result << endl;
  }
  
  return 0;
}
