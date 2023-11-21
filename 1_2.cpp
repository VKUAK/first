#include <iostream>

using namespace std;

int main() {
    double m, v, h;

    // Введення маси, швидкості і висоти від користувача
    cout << "Введіть масу тіла (кг): ";
    cin >> m;

    cout << "Введіть швидкість тіла (м/с): ";
    cin >> v;

    cout << "Введіть висоту тіла (м): ";
    cin >> h;

    // Розрахунок кінетичної енергії
    double kineticEnergy = 0.5 * m * v * v;

    // Розрахунок потенціальної енергії
    const double g = 9.8;  // прискорення вільного падіння на Землі
    double potentialEnergy = m * g * h;

    // Виведення результатів
    cout << "Кінетична енергія: " << kineticEnergy << " дж" << endl;
    cout << "Потенціальна енергія: " << potentialEnergy << " дж" << endl;

    return 0;
}