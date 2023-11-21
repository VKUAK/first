#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Задані константи x та n
    const double x = 3.0;
    const double n = -1.9;

    // Обчислення значення t
    double t = pow(x, 2) + sqrt(fabs(n));

    // Обчислення значення p
    double p = exp(sqrt(t));

    // Обчислення значення функції y
    double y = pow(log(p + t), 2);

    // Виведення результату
    cout << "Значення функції y = ln^2((e^√t + t)^2) при x = " << x << " та n = " << n << " дорівнює " << y << endl;

    return 0;
}
