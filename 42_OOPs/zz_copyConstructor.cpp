#include <iostream>
using namespace std;

// COPY CONSTRUCTOR
// shallow copy
class construct
{
private:
    int a, b;

public:
    construct(int x, int y)
    {
        a = x;
        b = y;
    }
    // Copy constructor
    construct(const construct &p2)
    {
        a = p2.a;
        b = p2.b;
    }
    int getX()
    {
        return a;
    }
    int getY()
    {
        return b;
    }
};
int main()
{
    construct p1(10, 15); // Normal constructor is called here
    construct p2 = p1;    // Copy constructor is called here

    // Let us access values assigned by constructors
    cout << "p1.a = " << p1.getX() << ", p1.b = " << p1.getY();
    cout << "\n p2.a = " << p2.getX() << ", p2.b = " << p2.getY();
    return 0;
}

// Output:
// p1.a = 10, p1.b = 15
// p2.a = 10, p2.b = 15