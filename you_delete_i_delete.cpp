#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int x;
    cin >> x;

    while (x--) {
        string s;
        cin >> s;
        int n = s.size();

        int pos0 = -1;
        int pos1 = -1;
        for (int i=0; i<n; i++) {
            if (s[i] == '0' && pos0 == -1) {
                pos0 = i;
            } else if (pos1 == -1 && s[i] == '1') {
                pos1 = i;
            }

            if (pos0 != -1 && pos1 != -1) {
                break;
            }
        }

        s.erase(pos0, 1);
        if (pos1 > pos0) {
            pos1--;
        }

        s.erase(pos1, 1);

        cout << s << endl;
    }
    return 0;
}