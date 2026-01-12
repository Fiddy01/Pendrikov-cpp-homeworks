#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    Product(const string& name, double price, int quantity)
        : name(name), price(price), quantity(quantity) {}

    // Метод sell — уменьшает количество, но не ниже нуля
    void sell(int amount) {
        if (amount < 0) {
            // игнорируем отрицательные запросы на продажу
            return;
        }
        quantity -= amount;
        if (quantity < 0) {
            quantity = 0;
        }
    }

    // Сообщает, есть ли товар в наличии
    bool isAvailable() const {
        return quantity > 0;
    }

    // Выводит информацию о товаре, включая статус
    void show() const {
        cout << "Товар: " << name << "\n"
             << "Цена: " << price << "\n"
             << "Количество на складе: " << quantity << "\n"
             << "Статус: " 
             << (isAvailable() ? "В наличии" : "Нет в наличии")
             << endl;
    }
};

int main() {
    Product p("Телефон", 19990, 5);

    // Продали 3 штуки
    p.sell(3);

    // Выводим обновлённые данные
    p.show();

    return 0;
}