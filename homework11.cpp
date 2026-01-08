#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Функция преобразует римское число s в десятичное
int romanToInt(const string& s) {
    static const unordered_map<char,int> value = {
        {'I', 1}, {'V', 5}, {'X',10},
        {'L',50}, {'C',100}, {'D',500}, {'M',1000}
    };
    int result = 0;
    int n = s.size();
    for(int i = 0; i < n; ++i) {
        int v = value.at(s[i]);
        // если следующий символ существует и его значение больше — вычитаем
        if (i+1 < n && value.at(s[i+1]) > v)
            result -= v;
        else
            result += v;
    }
    return result;
}

int main() {
    string s;
    cout << "Введите римское число: ";
    cin >> s;
    cout << "Десятичное значение: " 
         << romanToInt(s) << endl;
    return 0;
}