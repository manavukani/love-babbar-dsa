#include <iostream>
using namespace std;

// *
// * *
// * * *
// * * * *

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

            cout << "* ";
            j++;
        }

        cout << endl;
        
        i++;
    }
}
