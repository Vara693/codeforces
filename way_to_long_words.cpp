#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;

    while (n--) {
        string word;
        cin >> word;

        int n = word.size();

        if (n > 10) {
            word = string(1, word[0]) + to_string(n - 2) + string(1, word[n - 1]);
        }
        cout << word << endl;
    }

    return 0;
}