#include <bits/stdc++.h>
using namespace std;

int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// array
bool checkPalindrome(char arr[])
{
    int s = 0;
    int e = getLength(arr) - 1;

    while (s <= e)
    {
        if (arr[s] != arr[e])
            return 0;

        else
        {
            s++;
            e--;
        }
    }

    return 1;
}


int main()
{

    char name[20];

    cout << "String: ";
    cin >> name;

    cout << "Is palindrome? " << checkPalindrome(name) << endl;
}