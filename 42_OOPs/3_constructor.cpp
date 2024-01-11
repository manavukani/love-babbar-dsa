#include <bits/stdc++.h>
using namespace std;

class Hero
{

private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    // Constructor is called whenever an object is created
    // there is always a default constructor
    // which is discarded if we create custom

    Hero()
    {
        cout << "Simple constructor is called" << endl;
        name = new char[100];
    }

    // Parameterised constructor
    Hero(int h)
    {
        // cout << "this " << this << endl; // "this" is pointer, stores address of current object
        this->health = h;
    }
    Hero(int h, char l)
    {
        this->health = h;
        this->level = l;
    }

    // khud ka copy cons
    // Hero(Hero &temp) // pass by ref
    // {
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    // ----------- DEEP COPY -----------
    // Hero(Hero &temp)
    // {
    //     char *ch = new char[strlen(temp.name) + 1];
    //     strcpy(ch, temp.name);
    //     this->name = ch;
    //     cout << "Copy constructor called" << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char c)
    {
        level = c;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    void print()
    {
        cout << endl;
        cout << "[ Name: " << this->name << " ,";
        cout << "Health: " << this->health << " ,";
        cout << "Level: " << this->level << " ]";
        cout << endl
             << endl;
    }

    // Destructor
    ~Hero()
    {
        cout << "Destructor bhai called" << endl;
    }

    // Static function
    static int random()
    {
        return timeToComplete;
    }
};

// scope resolution operator ::
// used to access outside class
int Hero::timeToComplete = 5;

int main()
{

    cout << Hero::timeToComplete << endl; // preferable
    // cout << Hero::random() << endl;

    Hero a;

    cout << a.timeToComplete << endl; // not preferable, since static doesnt concern with object

    Hero b;
    b.timeToComplete = 10;
    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;

    /*
        // obj created statically
        // Hero ramesh(10);
        // cout << "Address of obj " << &ramesh << endl; // "this" stores address of current object

        // obj created dynamically
        // Hero *dy = new Hero(11);
        // cout << "Address of obj " << dy << endl; // "this" stores address of current object
        // Hero *dy2 = new Hero;

        // COPY CONSTRUCTOR
        Hero original(10, 'a');
        Hero copy(original);
        cout << "copy health: " << copy.getHealth() << endl;
        cout << "copy level: " << copy.getLevel() << endl;

    */

    /*
        // SHALLOW and DEEP COPY
        // default constructor -> shallow copy -> same memory
        // default constructor -> deep copy -> new memory

        Hero hero1;

        hero1.setHealth(12);
        hero1.setLevel('D');
        char name[7] = "Babbar";
        hero1.setName(name);

        hero1.print();

        // use default copy constructor

        Hero hero2(hero1);
        hero2.print();
        //    Here hero2 = hero1;

        hero1.name[0] = 'G';
        hero1.print();

        hero2.print();

        // copy assignment operator
        // hero1 = hero2;

        // hero1.print();

        // hero2.print();

    */

    /*
        // Static
        Hero a;

        // Dynamic
        Hero *b = new Hero();
        // manually destructor call for dynamic object
        delete b;
    */
}