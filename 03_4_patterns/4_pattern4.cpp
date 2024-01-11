#include <iostream>
using namespace std;

// 1
// 2 2
// 3 3 3
// 4 4 4 4

int main()
{
    int n;
    cout << "Enter rows: ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i) // col <= row
        {

            cout << i << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}
