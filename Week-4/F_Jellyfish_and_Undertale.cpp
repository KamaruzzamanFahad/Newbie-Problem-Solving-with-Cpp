#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b, n;
    cin >> a >> b >> n;

    long long count = b-1;
    b=1;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    int idx = 0;
    while (idx < n)
    {

        b = min(a, v[idx]+b);
      
      count += (b - 1);
      b = 1;

      idx++;
    }

    cout << count+1 << endl;
  }

  return 0;
}
