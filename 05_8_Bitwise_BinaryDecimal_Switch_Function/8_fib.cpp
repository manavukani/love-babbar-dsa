#include <iostream>
using namespace std;

// int fibonacci(int n)
// {
//     if (n <= 1)
//         return n;
//     return fibonacci(n-1) + fibonacci(n-2);
// }

int fibonacci(int n)
{

    if (n == 0 || n == 1)
        cout << n;

    int a = 0;
    int b = 1;

    for (int i = 2; i < n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin >> n;

    cout << "The " << n << "th term of the series is = " << fibonacci(n) << endl;

    return 0;
}