#include <iostream> // Подключаем библиотеку для ввода/вывода

int main() {
    int number; // Объявляем переменную для хранения числа
    
    // Запрашиваем число у пользователя
    std::cout << "Введите число: "; 
    std::cin >> number; // Считываем введенное число

    // Вычисляем и выводим квадрат числа
    int square = number * number; 
    std::cout << "Квадрат: " << square << std::endl;

    // Вычисляем и выводим куб числа
    int cube = number * number * number;
    std::cout << "Куб: " << cube << std::endl;

    return 0; // Программа успешно завершена
}