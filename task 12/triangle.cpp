#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool exists = (a > 0 && b > 0 && c > 0) &&
        (a + b > c) && (a + c > b) && (b + c > a);

    cout << "Стороны " << a << " " << b << " " << c << ": ";
    cout << (exists ? "треугольник существует" : "треугольник не существует") << endl;

    return 0;
}