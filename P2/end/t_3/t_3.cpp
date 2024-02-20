
#include <iostream>
using namespace std;

void rec(long long n, int ans = 0){
    if (n % 10 == 1)
    {
        return;
    }
    if (n % 2 == 0)
    {
        ans++;
    }
    rec(n / 10, ans);
}



int main() {
    int ans;
    long long n = 9223372036854775806;
    rec(n, ans);
    cout << ans;
}   