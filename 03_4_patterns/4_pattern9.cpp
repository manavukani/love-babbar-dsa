#include <iostream>
using namespace std;

/* 
Some other alphabet patterns

A
B C
D E F
G H I J (count method)


A
B C
C D E
D E F G   ('A' + i + j -2)

*/



// D
// C D
// B C D
// A B C D

int main()
{
    int n;
    cout << "Enter rows: ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {

        int j = 1;
        char start = 'A' + n - i; // just like count method we did, 4_7
    
        while (j <= i) //col <= row
        {

            cout << start << " ";
            start++;
            j++;
        }

        cout << endl;
        i++;
    }
}
