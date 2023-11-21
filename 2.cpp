//Трикутник задано координатами вершин A(0;0),B(i;i-1),C(-i;i+1), де і – 28.
//Обчислити бісектрису  та радіус вписаного кола .

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double i = -28.0;

    // Координати вершин трикутника
    double Ax = 0.0, Ay = 0.0;
    double Bx = i, By = i - 1;
    double Cx = -i, Cy = i + 1;

    // Вектори сторін трикутника
    double ABx = Bx - Ax, ABy = By - Ay;
    double ACx = Cx - Ax, ACy = Cy - Ay;

    // Обчислення бісектриси (вектору)
    double bisector_x = ABx + ACx;
    double bisector_y = ABy + ACy;

    // Нормалізація бісектриси
    double length = sqrt(bisector_x * bisector_x + bisector_y * bisector_y);
    bisector_x /= length;
    bisector_y /= length;

    // Виведення координат бісектриси
    cout << "Координати бісектриси: (" << bisector_x << ", " << bisector_y << ")" << endl;

    // Обчислення радіуса вписаного кола
    double semiperimeter = (sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2)) +
                            sqrt(pow(Ax - Cx, 2) + pow(Ay - Cy, 2)) +
                            sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2))) / 2.0;

    double radius_inscribed_circle = sqrt((semiperimeter - sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2))) *
                                          (semiperimeter - sqrt(pow(Ax - Cx, 2) + pow(Ay - Cy, 2))) *
                                          (semiperimeter - sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2))) / semiperimeter);

    // Виведення радіуса вписаного кола
    cout << "Радіус вписаного кола: " << radius_inscribed_circle << endl;

    return 0;
}