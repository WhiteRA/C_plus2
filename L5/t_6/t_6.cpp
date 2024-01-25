#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main() {
	int today_day, today_month, today_year;
	int birthday_day, birthday_month, birthday_year;
    cout << "Введите сегодняшнюю дату (день, месяц, год): ";
    cin >> today_day >> today_month >> today_year;

    cout << "Введите дату рождения (день, месяц, год): ";
    cin >> birthday_day >> birthday_month >> birthday_year;

    if (today_year - birthday_year < 18) {
        cout << "нельзя" << endl;
    }
    else if (today_year - birthday_year == 18) {
        if (today_month < birthday_month) {
            cout << "нельзя" << endl;
        }
        else if (today_month == birthday_month) {
            if (today_day < birthday_day) {
                cout << "нельзя" << endl;
            }
            else if (today_day == birthday_day) {
                cout << "нельзя" << endl;
            }
            else {
                cout << "можно" << endl;
            }
        }
        else {
            cout << "можно" << endl;
        }
    }
    else {
        cout << "можно" << endl;
    }

    return 0;

