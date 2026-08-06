#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> freq;
        long long sum = 0;

        int val = 0, mx = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
            freq[x]++;
            if (freq[x] > mx) {
                mx = freq[x];
                val = x;
            }
        }

        if (mx <= (n + 1) / 2) {
            cout << sum << "\n";
        } else {
            long long ans = sum - 1LL * mx * val + 1LL * (n - mx + 2) * val;
            cout << ans << "\n";
        }
    }

    return 0;
}