#include <bits/stdc++.h>
using namespace std;

void update(int **p2)
{
    // p2 = p2 + 1;     // no change

    // *p2 = *p2 + 1;   // p changes

    **p2 = **p2 + 1;    // i changes
}

int main()
{

        int i = 5;
        int *p = &i;
        int **p2 = &p;

    /*
        cout << "p : " << p << endl;
        cout << "address of p : " << &p << endl;

        cout << endl;
        // all are same
        cout << "For i: " << endl;
        cout << i << endl;
        cout << *p << endl;
        cout << **p2 << endl;

        cout << endl;
        // for p
        cout << "For p: " << endl;
        cout << &i << endl;
        cout << p << endl;
        cout << *p2 << endl;

        cout << endl;
        // for p2
        cout << "For p2: " << endl;
        cout << &p << endl;
        cout << p2 << endl;

    */

    cout << endl
         << endl;
    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;
    update(p2);
    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;
    cout << endl
         << endl;
}