#include <bits/stdc++.h>
using namespace std;

int main()
{
    // basics
    int num = 5;
    cout << "Num: " << num << endl;
    cout << "Address of num is: " << &num << endl;

    // NOTE: always initialize pointer while declaring
    int *ptr = &num;

    cout << "Value -> *ptr : " << *ptr << endl;
    cout << "Address -> ptr : " << ptr << endl;

    // both are same
    // num++;
    // cout << num << endl;

    // (*ptr)++;
    // cout << *ptr << endl;

    // pointer size = 4 (for 32 bit), 8 (for 64 bit)
    cout << "Size of num : " << sizeof(num) << endl;
    cout << "Size of ptr : " << sizeof(ptr) << endl;
    cout << "Size of *ptr : " << sizeof(*ptr) << endl;

    // copying pointer
    int *ptr2 = ptr;
    cout << "Value -> *ptr2 : " << *ptr2 << endl;
    cout << "Address -> ptr2 : " << ptr2 << endl;

    // directly assign
    int i = 10;
    int *q = &i;

    // updating pointer
    int *p = 0; // NULL pointer
    p = &i;

    cout << *q << " : both are equal :  " << *p << endl;

    // pointer arithmetic
    int x = 3;
    int *t = &x;
    // cout << (*t)++ << endl;
    *t = *t + 1;
    cout << "x=3, *t = *t + 1 -> *t = " << *t << endl;
    cout << "Initial t : " << t << endl;
    t = t + 1;
    cout << "After +1 : " << t << endl; // moves 4 bytes ahead
}