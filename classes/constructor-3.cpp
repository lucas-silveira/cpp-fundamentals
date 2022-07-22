#include <iostream>
using namespace std;

class Actor {
  public:
    string name;
    string email;

    // Calling a constructor from another one
    Actor() : Actor("Unknown") {}

    Actor(string name, string email = "-") { // using a default parameter
      // Using the object's own reference
      (*this).name = name;
      (*this).email = email;

      // The simplest way
      this->name = name;
      this->email = email;
    }

    string toString() {
      return this->name + " [" + this->email + "]";
    }
};

int main()
{
  Actor actor1("Steve", "steve@office.com");

  cout << actor1.toString() << endl;

  Actor actor2;

  cout << actor2.toString() << endl;

  return 0;
}