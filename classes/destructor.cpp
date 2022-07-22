#include <iostream>
using namespace std;

class Person {
  public:
    string name;

    // Constructor
    Person(string name) : name(name) {
      cout << "Hello! My name is " << name << endl;
    }

    // Destructor
    ~Person() {
      cout << name << " saying bye!" << endl;
    }
};

Person createPerson() {
  return Person("John");
}

int main()
{
  Person p1("Peter");
  Person p2 = createPerson();

  // New scope
  {
    // starting scope
    Person p3("Mary");
    // endind scope
  }
  // At this point the Mary object is destroyed as there are no references to her out of scope.

  cout << "End of code!" << endl;

  return 0;
}