#include <iostream> // Для ввода/вывода

int main() {
    char symbol; // Переменная для хранения введенного символа

    // Запрашиваем у пользователя символ
    std::cout << "Введите символ: ";
    std::cin >> symbol;

    // 1. Выводим сам символ
    std::cout << "Символ: " << symbol << std::endl;

    // 2. Выводим его код в ASCII (как int)
    // В C++ char можно без проблем привести к int, чтобы получить его ASCII-код
    std::cout << "Код: " << static_cast<int>(symbol) << std::endl; 

    // 3. Вычисляем код следующего символа
    // Если символ 'A', то следующий код будет 'A' + 1
    int next_symbol_code = static_cast<int>(symbol) + 1;
    std::cout << "Код следующего символа: " << next_symbol_code << std::endl;

    // 4. Выводим следующий по коду символ
    // Приводим вычисленный код обратно к типу char
    std::cout << "Следующий символ: " << static_cast<char>(next_symbol_code) << std::endl;

    return 0; // Программа успешно завершена
}