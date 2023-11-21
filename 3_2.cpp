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
    double z = sin(x + y) * sin(y - x);

    // Виведення результату
    cout << "Значення виразу z: " << z << endl;

    return 0;
}
