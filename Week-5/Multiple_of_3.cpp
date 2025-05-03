#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n % 3;

    if (temp == 0)
    {
        cout << n << endl;
    }
    else if (temp == 1)
    {
        cout << n - 1 << endl;
    }
    else
    {
        cout << n + 1 << endl;
    }

    return 0;
}
