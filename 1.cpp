#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double diameter;
    
    // Введення діаметра від користувача
    cout << "Введіть діаметр круга: ";
    cin >> diameter;

    // Розрахунок довжини кола
    double circumference = M_PI * diameter;

    // Розрахунок площі круга
    double area = 0.25 * M_PI * pow(diameter, 2);

    // Виведення результатів
    cout << "Довжина кола: " << circumference << endl;
    cout << "Площа круга: " << area << endl;

    return 0;
}

//де M_PI це число п (3,14) з бібліотеки cmath
