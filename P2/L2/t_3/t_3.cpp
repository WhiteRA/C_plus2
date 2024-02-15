
#include <iostream>
#include <vector>
using namespace std;

int rnd(int a, int b) {
    return rand() % (b - a + b) + a;
}

int main()
{
    vector<int> db(20);
    int start = 0, num;

    for (int i = 0; i < db.size(); i++)
    {
        db[i] = rnd (1,20);
        cout << db[i] << " ";
    }

    cout << "\nВвод - ";
    cin >> num;

    while (true)
    {
        if (num < 0)
        {
            break;
        }
        db[start] = num;
        start++;
        if (start == 20)
        {
            start = 0;
        }
    }

}

