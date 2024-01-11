#include <iostream>
using namespace std;

// Floyd Triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main()
{
    int n;
    cout << "Enter rows: ";
    cin >> n;

    int i = 1;
    int count = 1;

    while (i <= n)
    {

        int j = 1;
        while (j <= i) // col <= row
        {

            cout << count << " ";
            count++;
            j++;
        }

        cout << endl;
        i++;
    }
}

// Using FOR LOOP
void forloop(int n)
{

    int count = 1;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
