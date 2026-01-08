#include <iostream>
using namespace std;

// Функция меняет знак обоих чисел (передача по ссылке)
void changeSigns(int &a, int &b) {
    a = -a;
    b = -b;
}

int main() {
    int x, y;
    cout << "Введите первое число: ";
    cin >> x;
    cout << "Введите второе число: ";
    cin >> y;

    changeSigns(x, y);

    cout << "После изменения знаков: " << x << " " << y << endl;
    return 0;
}