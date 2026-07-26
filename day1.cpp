#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        long long r = n % 12;
        if (r < 10) {
            printf("%lld %lld\n", r, n - r);
        } else if (r == 11) {
            printf("%lld %lld\n", 11LL, n - 11);
        } else { // r == 10
            if (n >= 22) printf("%lld %lld\n", 22LL, n - 22);
            else printf("-1\n");
        }
    }
}