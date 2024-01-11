#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {2, 8, 10};

    cout << "Address of first memory block: " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of first memory block: " << &arr[0] << endl;

    cout << "*arr : " << *arr << endl; // same as arr[0]

    cout << "*arr + 1 : " << *arr + 1 << endl; // same as *(arr) + 1

    cout << "2nd value : " << arr[1] << endl;
    cout << "*(arr + 1) : " << *(arr + 1) << endl;   // gives value at 2nd place -> arr[1]


    
    // difference
    int a[20] = {1,2,3,4,5};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0]; 
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
}