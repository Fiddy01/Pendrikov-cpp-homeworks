#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Центр и радиус окружности
    const double cx = 2.0;
    const double cy = -1.0;
    const double r  = 5.0;
    const double r2 = r * r;  // 25

    double x, y;
    cout << "Введите координаты точки (x y): ";
    if (!(cin >> x >> y)) {
        cerr << "Некорректный ввод.\n";
        return 1;
    }

    // Квадрат расстояния до центра
    double dx = x - cx;
    double dy = y - cy;
    double dist2 = dx*dx + dy*dy;

    // Сравнение с r^2
    if (dist2 < r2) {
        cout << "Точка внутри окружности\n";
    }
    else if (fabs(dist2 - r2) < 1e-9) {
        cout << "Точка на границе окружности\n";
    }
    else {
        cout << "Точка вне окружности\n";
    }

    return 0;
}