#include <iostream>
using namespace std;

// * * * *
// * * *
// * *
// *

int main()
{
    int n;
    cout << "Enter rows: ";
    cin >> n;

    int i = 1;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}