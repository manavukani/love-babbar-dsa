#include <bits/stdc++.h>
using namespace std;

bool isValid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        return 1;
    else
        return 0;
}

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string str)
{
    int s = 0;
    int e = str.length() - 1;

    while (s <= e)
    {
        if (str[s] != str[e])
            return false;
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

bool isPalindrome(string s)
{

    string temp = "";

    // remove unwanted characters
    for (int i = 0; i < s.length(); i++)
    {
        if (isValid(s[i]))
            temp.push_back(s[i]);
    }

    // convert to lowercase #not case sensitive
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = toLowerCase(temp[i]);
    }

    // check palindrome
    return checkPalindrome(temp);
}

int main()
{
    string str;
    cout << "String: ";
    cin >> str;

    cout << "Is palindrome? " << isPalindrome(str) << endl;

    return 0;
}

// N2i&nJA?a&jnI2n   
// Is palindrome? Yes

// A man, a plan, a canal: Panama
// Is palindrome? Yes