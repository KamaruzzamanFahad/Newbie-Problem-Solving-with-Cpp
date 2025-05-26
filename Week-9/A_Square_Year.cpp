#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int num = stoi(s);
        bool found = false;

        // try all possible splits (1 to 3 digits for a, remaining for b)
        for (int i = 1; i < 4; i++) {
            string sa = s.substr(0, i);
            string sb = s.substr(i);
            int a = stoi(sa);
            int b = stoi(sb);
            int sum = a + b;
            if (sum * sum == num) {
                cout << a << " " << b << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << -1 << endl;
    }

    return 0;
}
