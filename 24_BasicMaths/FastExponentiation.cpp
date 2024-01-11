// (a mod m) + (b mod m)mod m = a + b mod m
// (a mod m) - (b mod m)mod m = a - b mod m
// (a mod m) * (b mod m)mod m = a * b mod m

#include <bits/stdc++.h>
using namespace std;

int fastExpo(int a, int b)
{

    int res = 1;

    while (b > 0)
    {

        if (b & 1)
        {
            // odd
            res = res * a;
        }
        b = b >> 1; // same as divide by 2 (right shift), time efficient
        a = a * a;
    }
    return res;
}

int main()
{

    int a, b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    cout << "Answer is: " << fastExpo(a, b) << endl;

    return 0;
}