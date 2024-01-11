#include <bits/stdc++.h>
using namespace std;

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

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char c)
    {
        level = c;
    }
};

int main()
{
    cout << "--------- a ---------" << endl;
    // static
    Hero a;
    a.setHealth(40);
    a.setLevel('a');
    cout << "Level : " << a.getLevel() << endl;
    cout << "Health : " << a.getHealth() << endl;

    cout << "--------- b ---------" << endl;
    // dynamic (*b) = b->
    Hero *b = new Hero;
    // (*b).setHealth(50);
    b->setHealth(50);
    b->setLevel('b');

    cout << "Level : " << b->getLevel() << endl;
    cout << "Health : " << b->getHealth() << endl;
    // or
    // cout << "Level : " << (*b).getLevel() << endl;
    // cout << "Health : " << (*b).getHealth() << endl;
}