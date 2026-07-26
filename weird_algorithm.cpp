#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << 3 << " ";
    while (n!= 1) {
        if (n % 2 == 0) {
            n/=2;
        } else {
            n = n*3 +1;
        }

        cout << n << " ";
    }
    return 0;
}