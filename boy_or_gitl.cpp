#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    string userName;
    cin >> userName;
    unordered_set<char> Set;

    for (char ch: userName) {
        Set.insert(ch);
    }

    if (Set.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}