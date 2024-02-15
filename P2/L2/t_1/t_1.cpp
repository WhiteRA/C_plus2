#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, j;
    int l = 0;
    cout << "\n Размер - ";
    cin >> n;

    vector<int> w(n);
    for (int i = 0; i < w.size(); i++)
    {
        cout << "\n Ввод - ";
        cin >> w[i];
    }

    cout << "\n Удалить - ";
    cin >> j;

    vector<int> result;
    for (int num : w) {
        if (num != j) {
            result.push_back(num);
            cout << num << " ";
        }
    }


    return 0;
}