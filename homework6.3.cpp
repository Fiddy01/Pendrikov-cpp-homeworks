#include <iostream> // Для ввода/вывода (cin, cout)
#include <string>   // Для работы со строками (string)

int main() {
    // Объявляем две строки для хранения ввода пользователя
    std::string firstString;
    std::string secondString;

    // Запрашиваем первую строку у пользователя
    std::cout << "Введите первую строку: ";
    // Считываем всю строку, включая пробелы, до нажатия Enter
    std::getline(std::cin, firstString);

    // Запрашиваем вторую строку у пользователя
    std::cout << "Введите вторую строку: ";
    std::getline(std::cin, secondString);

    // Объединяем строки с помощью оператора '+'
    std::string resultString = firstString + secondString;

    // Выводим результат
    std::cout << "Результат: " << resultString << std::endl;

    return 0; // Успешное завершение программы
}