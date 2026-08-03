#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        vector<int> nums(x);
        int sum = 0;

        for (int i= 0; i<x; i++) {
            cin >> nums[i];
            sum+=nums[i];
        }

        if (sum%4 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}