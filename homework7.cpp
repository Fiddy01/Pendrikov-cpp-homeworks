#include <iostream> // Для ввода/вывода (cin, cout)
#include <cmath>    // Может пригодиться для abs()

// Функция для проверки числа на палиндром
bool isPalindrome(int n) {
    // Отрицательные числа не являются палиндромами (по общепринятому определению)
    if (n < 0) {
        return false;
    }

    // Особый случай: числа, оканчивающиеся на 0 (кроме самого 0), не могут быть палиндромами
    if (n != 0 && n % 10 == 0) {
        return false;
    }

    int reversedNumber = 0; // Здесь будем строить перевернутое число
    int originalNumber = n; // Сохраняем исходное число для сравнения

    // Крутимся, пока исходное число не станет меньше или равно перевернутому
    // Если число - палиндром, в какой-то момент originalNumber станет равно reversedNumber
    // или reversedNumber станет больше originalNumber (например, для 123: 123 -> 321)
    while (originalNumber > reversedNumber) {
        int lastDigit = originalNumber % 10; // Получаем последнюю цифру
        reversedNumber = reversedNumber * 10 + lastDigit; // Добавляем цифру к перевернутому числу
        originalNumber /= 10; // Убираем последнюю цифру из исходного числа
    }
    return originalNumber == reversedNumber || originalNumber == reversedNumber / 10;
}

int main() {
    int number;

    std::cout << "Введите целое число: ";
    std::cin >> number;

    if (isPalindrome(number)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0; // Успешное завершение программы
}