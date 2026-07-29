#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }


    int target = nums[k-1];
    int ans = 0;

    for (int i=0; i<n; i++) {
        if (nums[i] >= target && nums[i] > 0) ans++;
    }

    cout << ans << endl;

    return 0;
}