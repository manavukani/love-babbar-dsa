#include<iostream>
using namespace std;

// * * * *
// * * * *
// * * * *
// * * * *

int main() {

    int n;
    cout << "Enter rows: ";
    cin >> n;

    int i = 1; //row

    while (i<=n)
    {
        int j = 1; //column
        while (j<=n)
        {
            cout << "*  ";
            j++;
        }
        cout << endl;
        i++;
    }
    
}