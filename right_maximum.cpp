#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int rightMax(vector<int> &nums) {
    int ops = 0;
    int currMax = INT_MIN;

    for (int i=0; i<nums.size(); i++) {
        if (nums[i] >= currMax) {
            currMax = nums[i];
            ops++;
        }
    }

    return ops;
}
int main() {
    int n;
    cin >> n;

    while (n != 0) {
        int x;
        cin >> x;

        vector<int> nums(x);
        for (int i=0; i<x; i++) {
            cin >> nums[i];
        }

        cout << rightMax(nums) << endl;
        n--;
    }

    return 0;
}