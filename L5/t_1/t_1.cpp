#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a;
    int b;
    cout << "Самолёта :\n";
    cin >> a;
    cout << "Высота :\n";
    cin >> b;
    if (750 < a < 850)
    {
        if (9000 < b < 9500) {
            cout << "Правильным эшелоном летит самолёт\n";
        }
        else
        {
            cout << "Неравильным эшелоном летит самолёт\n";
        }
    }
    else
    {
        cout << "Неравильным эшелоном летит самолёт\n";
    }
}

