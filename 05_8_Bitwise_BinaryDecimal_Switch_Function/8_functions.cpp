#include <iostream>
using namespace std;

int power(int a, int b)
{

    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

bool isEven(int a)
{
    if (a & 1) // odd
        return 0;
    else // even
        return 1;
}

int main()
{

    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    cout << "a^b = " << power(a, b) << endl;

    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (isEven(x))
        cout << "is even" << endl;
    else
        cout << "is odd" << endl;
}