#include <bits/stdc++.h>
using namespace std;

// char arr is terminated using null character (ascii -> 0)
int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name[20];

    cout << "Name: ";
    ;
    cin >> name;

    // cin only works till space, tab or enter
    // solution: getline(cin, str);
    cout << "Your name is: " << name << endl;
    cout << "Length: " << getLength(name) << endl;
}

// string has operations like
// operator+=
// append
// push_back
// assign
// insert
// erase
// replace
// swap
// pop_back 
// strlen(str)
// strcmp(s1,s2)
// strcpy(trgt,src)