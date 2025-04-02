#include<bits/stdc++.h>
using namespace std;

int main(){
  int s,t;
  cin >> s >> t;

  int count = 0;
    for (int a = 0; a <= s; ++a) { // a goes from 0 to s
        for (int b = 0; b <= s - a; ++b) { // b goes from 0 to (s - a)
            for (int c = 0; c <= s - a - b; ++c) { // c goes from 0 to (s - a - b)
                if (a * b * c <= t) {
                    count++;
                }
            }
        }
    }
    count << count;

  return 0;
}
