#include <iostream>
using namespace std;

int factorial(int n)
{

    if (n < 0)
        return false;

    else if (n == 0 || n == 1)
        return 1;

    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Factorial of n: " << factorial(n) << endl;
}