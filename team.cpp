#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int amount = 0;

    while (n--) {
        int petya;
        int vasya;
        int tonya;

        cin >> petya >> vasya >> tonya;

        if ((petya == 1 && vasya == 1) || (petya == 1 && tonya == 1) || (tonya == 1 && vasya == 1)) {
            amount++;
        }
    }

    cout << amount << endl;
    return 0;
}