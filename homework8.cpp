#include <iostream> // Для ввода/вывода (cin, cout)
#include <string>   // Для работы со строками (string)
#include <cctype>   // Для использования функции tolower()

// Функция для проверки строки на изограмму
bool isIsogram(std::string str) {
    // Проверяем, не пустая ли строка. Пустая строка - это изограмма ;)
    if (str.empty()) {
        return true;
    }

    // Проходим по каждому символу строки
    for (int i = 0; i < str.length(); ++i) {
        char currentChar = std::tolower(str[i]);
        // Игнорируем пробелы
        if (currentChar == ' ') {
            continue; // Переходим к следующей итерации цикла
        }

        for (int j = i + 1; j < str.length(); ++j) {
            char compareChar = std::tolower(str[j]); // Преобразуем в нижний регистр

            // Сравниваем, игнорируя пробелы
            if (compareChar != ' ' && currentChar == compareChar) {
                // Если нашли повторение (и это не пробел), значит, это не изограмма
                return false;
            }
        }
    }

    // Если мы прошли все проверки и не нашли ни одного повторения, значит это изограмма
    return true;
}

int main() {
    std::string inputString;

    std::cout << "Введите строку для проверки на изограмму: ";
    std::getline(std::cin, inputString); // Считываем всю строку, включая пробелы

    if (isIsogram(inputString)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0; // Успешное завершение программы
}