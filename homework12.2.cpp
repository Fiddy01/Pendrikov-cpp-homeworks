#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    Product()
        : name(""), price(0.0), quantity(0)
    {}

    Product(const string& name, double price, int quantity)
        : name(name), price(price), quantity(quantity)
    {}

    // метод определения наличия
    bool isAvailable() const {
        return quantity > 0;
    }

    // геттеры
    string  getName()     const { return name; }
    double  getPrice()    const { return price; }
    int     getQuantity() const { return quantity; }

    // сеттеры
    void setName(const string& n) { name = n; }
    void setPrice(double p)        { price = p; }
    void setQuantity(int q)        { quantity = q; }

    // метод для вывода сведений о товаре с учётом статуса
    void show() const {
        cout << "Товар: " << name        << endl
             << "Цена: "  << price       << endl
             << "Количество на складе: " << quantity << endl
             << "Статус: "
             << (isAvailable() ? "В наличии" : "Нет в наличии")
             << endl;
    }
};

int main() {
    Product p1("Телефон", 19990, 5);
    p1.show();
    cout << endl;

    Product p2("Наушники", 2990, 0);
    p2.show();

    return 0;
}