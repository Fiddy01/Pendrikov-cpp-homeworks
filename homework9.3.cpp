#include <iostream>
using namespace std;

// Рекурсивная функция, выводящая числа от n до 1
void countdown(int n) {
    if (n < 1) return;   // базовый случай: ничего не делаем, если n < 1
    cout << n << " ";
    countdown(n - 1);    // рекурсивный вызов с n-1
}

int main() {
    int n;
    cout << "Введите число: ";
    cin >> n;

    countdown(n);
    cout << endl;
    return 0;
}