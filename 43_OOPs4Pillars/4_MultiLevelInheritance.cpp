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
// Child class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "barking" << endl;
    }
};

// child of child class
// derived class becomes the base class of the new class
class BabyDog : public Dog
{
public:
    void weep()
    {
        cout << "weeping";
    }
};
int main()
{
    // Creating an object of the child class
    BabyDog obj;
    // calling methods
    obj.eat();
    obj.bark();
    obj.weep();
}
