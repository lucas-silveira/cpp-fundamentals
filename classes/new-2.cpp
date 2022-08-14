#include <iostream>
using namespace std;

class Person {
  public:
    string name;

    Person(string name) : name(name) {
      cout << "Hello " << name << "!" << endl;
    }

    ~Person() {
      cout << "Good bye " << name << "!" << endl;
    }
};

Person* createPerson() {
  Person *p = new Person("Peter");
  return p;
}

void changePerson(Person &p) {
  p.name += " Parker";
}

int main()
{
  Person *person1 = new Person("Aunt May Parker"); // Heap
  delete person1;

  Person* person2 = (Person*) malloc(sizeof(Person)); // it's only allocates memory space. It doesn't call the object constructor
  free(person2); // it's only free up memory space. It doesn't call the object destructor

  Person* person3 = createPerson();
  cout << person3->name << endl; // Peter
  changePerson(*person3);
  cout << person3->name << endl; // Peter Parker
  delete person3;

  return 0;
}