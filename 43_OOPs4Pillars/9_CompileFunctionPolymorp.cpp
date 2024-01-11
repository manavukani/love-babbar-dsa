#include <iostream>
using namespace std;

// DIFFERENT NUMBER OF ARGS
class A
{

public:
    // 2
    int add(int num1, int num2)
    {
        return num1 + num2;
    }
    // 3
    int add(int num1, int num2, int num3)
    {
        return num1 + num2 + num3;
    }
};

// DIFFERENT TYPE OF ARGS
class B
{
public:
    // int
    int add(int num1, int num2)
    {
        return num1 + num2;
    }
    // double
    double add(double num1, double num2)
    {
        return num1 + num2;
    }
};

// DEFAULT ARGS - from rightmost
class C
{
public:
    int add(int x, int y, int z = 0, int w = 0)
    {
        return (x + y + z + w);
    }
};

int main()
{

    A a;
    cout << a.add(10, 20) << endl;
    cout << a.add(10, 20, 30);
    cout << endl
         << endl;

    B b;
    cout << b.add(10, 20) << endl;
    cout << b.add(10.4, 20.5);
    cout << endl
         << endl;

    C c;
    cout << c.add(10, 20) << endl;
    cout << c.add(10, 20, 30) << endl;
    cout << c.add(10, 20, 30, 40) << endl;

    return 0;
}