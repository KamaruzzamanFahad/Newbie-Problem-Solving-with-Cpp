#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        cin >> s;
        string result = "";

        int lower_skips = 0, upper_skips = 0;

        // traverse from end to beginning
        for (int i = s.size() - 1; i >= 0; i--) {
            char c = s[i];
            if (c == 'b') {
                lower_skips++;
            }
            else if (c == 'B') {
                upper_skips++;
            }

            
            else if (islower(c)) {
                if (lower_skips > 0) {
                    lower_skips--;
                } else {
                    result += c;
                }
            }
            
            else if (isupper(c)) {
                if (upper_skips > 0) {
                    upper_skips--;
                } else {
                    result += c;
                }
            }
        }

        // reverse the final result since we built it backwards
        reverse(result.begin(), result.end());
        cout << result << '\n';
    }

    return 0;
}
