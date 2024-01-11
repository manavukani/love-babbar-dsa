#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
    // updates the address (inside update only not globally)
    // p = p + 1;

    // cout << "Inside address " << p << endl;

    // updates the value
    *p = *p + 1;
}

int getSum(int *arr, int n)
{

    // returns size of pointer instead of array
    cout << endl
         << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;

    // print(p);
    cout << endl;
    cout << "Before Address : " << p << endl;
    cout << "Before Value : " << *p << endl;
    update(p);
    cout << "After Address : " << p << endl;
    cout << "After Value : " << *p << endl;

    cout << endl;

    int arr[6] = {1, 2, 3, 4, 5, 8};

    cout << "Sum is " << getSum(arr, 6) << endl;
    cout << endl;

    // benefit of pointer
    // part of array as input (instead of whole array)
    // *(arr + i) = arr[i]
    cout << "Sum is " << getSum(arr + 3, 3) << endl;

    return 0;
}