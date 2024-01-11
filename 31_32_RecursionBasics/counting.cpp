#include <iostream>
using namespace std;

// Time complexity: O(n)
// Space complexity: O(n) -> storing N elements in stack

void print(int n)
{
    // base case
    if (n == 0)
        return;

    print(n - 1);
    cout << n << endl; // keeps waiting till it reaches base condition
}

void printrev(int n)
{
    // base case
    if (n == 0)
        return;

    cout << n << endl; // is executed first then recusively called
    printrev(n - 1);
}

int main()
{

    cout << endl;
    // print(5);
    printrev(5);

    return 0;
}

/*
FOR PRINT
Stack:
1
2
3
4
5

when return called -> 1 2 3 4 5

FOR PRINTREV
Stack:
5
4
3
2
1

when return called -> 5 4 3 2 1
*/
