#include <iostream>
#include <vector>
using namespace std;

void swapvec(vector<int>& vec, int* arr) {
    for (size_t i = 0; i < vec.size(); ++i) {
        swap(vec[i], arr[i]);
    }
}

int main() {
    vector<int> a = { 1, 2, 3, 4 };
    int b[] = { 2, 4, 6, 8 };
    swapvec(a, b);
    for (int i = 0; i < 4; ++i)
        cout << a[i];
    cout << endl;
    for (int i = 0; i < 4; ++i)
        cout << b[i];
    return 0;
}