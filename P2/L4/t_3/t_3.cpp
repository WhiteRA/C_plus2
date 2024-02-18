#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers;
    int input;

    while (true) {
        cin >> input;

        if (input == -1) {
            sort(numbers.begin(), numbers.end());
            if (numbers.size() >= 5) {
                cout << numbers[4] << endl;
            }
            else {
                cout << "Недостаточно цифр" << endl;
            }
            break;
        }
        else if (input == -2) {
            break;
        }
        else {
            numbers.push_back(input);
        }
    }

    return 0;
}