#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    // Введення значень x та y від користувача
    cout << "Введіть значення x: ";
    cin >> x;

    cout << "Введіть значення y: ";
    cin >> y;

    // Обчислення виразу z
    double z = pow(cos(x), 2) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2) - 1;

    // Виведення результату
    cout << "Значення виразу z: " << z << endl;

    return 0;
}