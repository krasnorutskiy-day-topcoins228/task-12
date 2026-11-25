#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    // 1. Проверка месяца (ранний отказ)
    if (month < 1 || month > 12) {
        cout << "Ошибка: месяц от 1 до 12" << endl;
        return 0;
    }

    // 2. Проверка нижней границы дня (ранний отказ)
    if (day < 1) {
        cout << "Ошибка: день от 1 и больше" << endl;
        return 0;
    }

    // 3. Вычисление максимального дня месяца (каскад)
    int max_day;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        max_day = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        max_day = 30;
    }
    else { // month == 2
        // Формула високосности из задания 1
        bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (leap) {
            max_day = 29;
        }
        else {
            max_day = 28;
        }
    }

    // 4. Финальная проверка дня
    if (day <= max_day) {
        cout << "Дата " << day << "." << month << "." << year << " корректна" << endl;
    }
    else {
        cout << "Ошибка: в месяце " << month << " не больше " << max_day << " дней" << endl;
    }

    return 0;