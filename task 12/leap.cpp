#include <iostream>

int main()
{
    int year;
    std::cout << "Введите год:" << std::endl;
    std::cin >> year;
    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    std::cout << leap << std::endl;
    std::cout << year << " — " << (leap ? "високосный" : "не високосный") << std::endl;
    return 0;
}
