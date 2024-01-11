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

void reverse(char arr[])
{
    int s = 0;
    int e = getLength(arr) - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{

    char name[20];

    cout << "String: ";
    cin >> name;

    cout << "Your string is: " << name << endl;
    reverse(name);
    cout << "Reverse: " << name << endl;
}