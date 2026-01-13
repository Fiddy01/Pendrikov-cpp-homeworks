#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    // читаем количество элементов
    if (!(cin >> N)) {
        cerr << "Ошибка чтения числа элементов\n";
        return 1;
    }

    vector<string> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    vector<bool> res;
    res.reserve(N);

    bool current = true;  // изначально true

    for (int i = 0; i < N; ++i) {
        // каждому элементу присваиваем текущее логическое значение
        res.push_back(current);

        // если слово "flick", переключаем флаг
        if (a[i] == "flick") {
            current = !current;
        }
    }

    // выводим результат
    for (int i = 0; i < N; ++i) {
        cout << (res[i] ? "true" : "false");
        if (i + 1 < N) cout << ' ';
    }
    cout << '\n';

    return 0;
}