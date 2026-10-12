#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int cnt[26] = {0};

        for (char c : s) {
            cnt[c - 'a']++;
        }

        int ans = 0;

        for (int i = 0; i < 26; i++) {
            ans += cnt[i] / 2;
        }

        cout << ans << endl;
    }

    return 0;
}
