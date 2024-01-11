#include <bits/stdc++.h>
// #include "hero.cpp"
using namespace std;

// ACCESS MODIFIRES -> public, private (only within class), protected

// by default is private
class Hero
{

private:
    int health;

public:
    char level;

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    // void setHealth(int h, string name)
    void setHealth(int h)
    {
        // can use conditions in setters,
        // if (name == "ramesh"){
        //     health = h;
        // }

        health = h;
    }

    void setLevel(char c)
    {
        level = c;
    }
};

int main()
{
    // object creation
    Hero ramesh;

    // without this -> garbage values
    // ramesh.health = 2;
    ramesh.level = 'a';

    cout << "Level: " << ramesh.level << endl;
    // cout << "Health: " << ramesh.health << endl;

    // size of empty class is = 1
    // size of class depends on properties inside it
    // https://www.includehelp.com/cpp-tutorial/size-of-a-class-in-cpp-padding-alignment-in-class-size-of-derived-class.aspx
    // cout << "Size: " << sizeof(ramesh);

    // GETTERS SETTERS
    // used to access private
    cout << "Health: " << ramesh.getHealth()<<endl;
    ramesh.setHealth(5);
    cout << "Health: " << ramesh.getHealth()<<endl;

}