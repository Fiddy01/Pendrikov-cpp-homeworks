#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    // Конструктор по умолчанию
    Product()
        : name(""), price(0.0), quantity(0)
    {}

    // Конструктор с параметрами инициализации
    Product(const string& name, double price, int quantity)
        : name(name), price(price), quantity(quantity)
    {}

    // Геттеры
    string  getName()     const { return name; }
    double  getPrice()    const { return price; }
    int     getQuantity() const { return quantity; }

    // Сеттеры
    void setName(const string& n) { name = n; }
    void setPrice(double p)        { price = p; }
    void setQuantity(int q)        { quantity = q; }

    // Метод для вывода сведений о товаре
    void show() const {
        cout << "Товар: " << name    << endl
             << "Цена: "  << price   << endl
             << "Количество на складе: " << quantity << endl;
    }
};

int main() {
    // Пример использования
    Product p("Телефон", 19990, 5);
    p.show();

    return 0;
}