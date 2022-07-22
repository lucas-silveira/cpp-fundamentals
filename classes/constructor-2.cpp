#include <iostream>
using namespace std;

class User {
  public:
    string name;
    string email;

    User() {}

    // We can have two or more constructors with overload mechanism
    User(string aName, string anEmail) {
      name = aName;
      email = anEmail;
    }

    string toString() {
      return name + " [" + email + "]";
    }
};

int main()
{
  // Using the default constructor
  User usr1;
  User usr2 = User(); // alternative way
  usr2.name = "John";
  usr2.email = "john@gmail.com";

  cout << usr2.toString() << endl;

  // Using the second constructor
  User usr3("Mary", "mary@gmail.com");
  User usr4 = User("Alice", "alice@gmail.com"); // alternative way

  cout << usr3.toString() << endl;
  cout << usr4.toString() << endl;

  return 0;
}