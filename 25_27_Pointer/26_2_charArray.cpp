#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    // different cout implementation
    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    // prints entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl; //prints till finds null
}