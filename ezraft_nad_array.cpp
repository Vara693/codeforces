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

        if (x == 1) {
            cout << 1 << endl;
        } else if (x == 2) {
            cout << -1 << endl;
        } else {
            vector<long long> nums(x);

            for (int i=0; i<3; i++) {
                nums[i] = i+1;
                cout << nums[i] << " ";
            }

            long long sum = 6;
            for (int i=3; i<x; i++) {
                nums[i] = sum;
                sum += sum;
                cout << nums[i] << " ";
            }

            cout << endl;
        }
    }
    return 0;
}