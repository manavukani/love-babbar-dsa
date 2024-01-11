#include <iostream>
using namespace std;

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

void pattern(int num)
{
    // top
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // bottom
    for (int i = num - 1; i > 0; i--)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

//     1
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5

void pyramid(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

//        /
//       * *
//      / / /
//     * * * *
//    / / / / /

void oddeven(int num)
{

    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < num - i; j++)
            cout << " ";

        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
                cout << "* ";
            else
                cout << "/ ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter rows: ";
    cin >> n;

    pattern(n);
    pyramid(n);
    oddeven(n);
}