#include <iostream>
using namespace std;

// Функция возвращает меньшее из двух целых чисел
int minValue(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;
    cout << "Введите два числа: ";
    cin >> x >> y;

    int result = minValue(x, y);
    cout << "Минимум: " << result << endl;

    return 0;
}