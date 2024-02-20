#include <iostream>
using namespace std;

int rec(int n, int k) {
    if (n <= 1) {
        return 1;
    }
    int count = 0;
    for (int i = 1; i <= k && i <= n; ++i) {
        count += rec(n - i, k);
    }
    return count;
}

int main() {
    int n = 3;
    int k = 2;
    //std::cout << rec(n, k) << " ";

}