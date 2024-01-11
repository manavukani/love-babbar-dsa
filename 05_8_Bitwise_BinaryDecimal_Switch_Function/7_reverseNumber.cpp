// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter number: ";
    cin >> n;

    int rev = 0;
    int digit;

    while (n != 0)
    {
        digit = n % 10;

        // to prevent overflow
        if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10))
            return 0;

        rev = rev * 10 + digit;
        n = n / 10;
        }

        cout << "Reversed number: " << rev << endl;
    }