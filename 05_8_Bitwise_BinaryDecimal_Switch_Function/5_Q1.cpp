// sum and product of digits of number

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int product = 1;

    int num;
    cout << "enter number: ";
    cin >> num;

    while (num != 0)
    {
        int digit = num % 10;
        product = product * digit;
        sum = sum + digit;

        num /= 10;
    }

    cout << "Difference of product and sum is: " << product - sum << endl;
}