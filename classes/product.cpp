#include <iostream>
using namespace std;

class Product {
  public:
    string name;
    double price;
    double discount;

    double finalPrice() {
      return price * (1 - discount);
    }
};

int main()
{
  Product p1;
  p1.name = "Notebook";
  p1.price = 1600.45;
  p1.discount = 0.15;

  cout << p1.name << endl;
  cout << p1.price << endl;
  cout << p1.discount << endl;
  cout << p1.finalPrice() << endl;

  Product p2{"Notebook", 1600.45, 0.15};

  cout << p2.name << endl;
  cout << p2.price << endl;
  cout << p2.discount << endl;
  cout << p2.finalPrice() << endl;

  return 0;
}