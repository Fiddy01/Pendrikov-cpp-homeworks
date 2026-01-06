// Программа: Персональное приветствие пользователя 
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Задаём переменную для хранения имени
    string Name;

    // Программа запрашивет имя
    cout << "Введите ваше имя: ";
    getline(cin, Name);

    // Вывод персонального приветствия
    cout << "Здравствуйте " << Name << "! Как ваши дела?" << endl;

    return 0;
}