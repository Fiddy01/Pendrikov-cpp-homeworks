#include <iostream> // Для ввода/вывода
#include <iomanip>  // Для форматированного вывода (чтобы красиво отображать дробные числа)

int main() {
    // Задаем курсы валют.
    // Для удобства работы с дробными числами будем использовать double.
    const double USD_TO_RUB = 78.0; 
    const double EUR_TO_RUB = 92.0;

    double rubles; // Переменная для суммы в рублях

    // Запрашиваем у пользователя сумму в рублях
    std::cout << "Введите сумму в рублях: ";
    std::cin >> rubles;

    // Переводим рубли в доллары
    double dollars = rubles / USD_TO_RUB;

    // Переводим рубли в евро
    double euros = rubles / EUR_TO_RUB;

    // Устанавливаем точность вывода для дробных чисел (два знака после запятой)
    std::cout << std::fixed << std::setprecision(2); 

    // Выводим результат конвертации
    std::cout << "В долларах: " << dollars << std::endl;
    std::cout << "В евро: " << euros << std::endl;

    return 0; // Программа успешно завершена
}