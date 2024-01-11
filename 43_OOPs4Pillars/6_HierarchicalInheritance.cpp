#include <iostream>
using namespace std;

// Parent class
class Animal
{
public:
    void eat()
    {
        cout << "eating" << endl;
    }
};

// child class1
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "barking" << endl;
    }
};

// child class2
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "meowing" << endl;
    }
};
int main()
{
    Animal obj1;
    obj1.eat();

    Dog obj2;
    obj2.eat();
    obj2.bark();

    Cat obj3;
    // calling methods
    obj3.eat();
    obj3.meow();
    // obj.bark(); // error
}
