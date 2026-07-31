#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <math.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;

        int k = 0;
        int ops = 0;

        int p=0;
        while (x*pow(10, p+1) <= y) {
            p++;
        }

        while (k < y && p>=0) {
            if (k + x*pow(10, p) <= y) {
                k += x*pow(10, p);
                ops++;
            } else {
                p--;
            }
        }

        while (k<y) {
            k += 1;
            ops++;
        }

        cout << ops << endl;
    }
    return 0;
}