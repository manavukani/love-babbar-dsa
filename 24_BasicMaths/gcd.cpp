// NOTE
// lcm(a,b) * gcd(a,b) = a*b
// gcd(a,b) = gcd(a-b,b) = gcd(a%b,b)

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    while (a != b)
    {

        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int gcdRecursion(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{

    int a, b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    int x = gcd(a, b);
    int y = lcm(a, b);

    cout << "The GCD of " << a << " & " << b << " is: " << x << endl;
    cout << "The LCM of " << a << " & " << b << " is: " << y << endl;

    return 0;
}