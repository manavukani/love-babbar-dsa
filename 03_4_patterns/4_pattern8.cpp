#include <iostream>
using namespace std;

// A
// B B
// C C C
// D D D D
void pattern1(int n)
{
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)

        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}

// A
// A B
// A B C
// A B C D

void pattern2(int n)
{
    int i = 1;

    while (i <= n)
    {

        int j = 1;
        while (j <= i) // col <= row
        {

            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}

int main()
{
    int n;
    cout << "Enter rows: ";
    cin >> n;

    pattern1(n);
    cout << endl;
    pattern2(n);
}
