#include <iostream>
using namespace std;

class Human
{

public:
    int height;
    int weight;

private:
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    int getWeight()
    {
        return this->weight;
    }
};

class Male : public Human // public mode
{

public:
    string name;

    void getGender()
    {
        cout << "Gender: M" << endl;
    }

    // private memebers cannot be inherited
    /* int getAge(){
        return this->age;
    }
     */
};

class Female : protected Human // protected mode
{

public:
    string name;

    void getGender()
    {
        cout << "Gender: F" << endl;
    }

    // protected mode => need getter setter
    int getHeight()
    {
        return this->height;
    }
};

int main()
{

    Male m1;
    m1.getGender();
    cout << m1.height << endl;
    cout << m1.weight << endl;
    m1.name = "QWERTY";
    cout << m1.name << endl;

    // private data member cannot be inherited
    // cout << m1.age << endl;

    cout << endl
         << endl;

    Female f1;
    f1.getGender();
    // cannot access directly coz protected mode
    // cout << f1.height << endl;
    cout << f1.getHeight() << endl;

    return 0;
}