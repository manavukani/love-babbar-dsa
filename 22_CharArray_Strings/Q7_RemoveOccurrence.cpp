#include <bits/stdc++.h>
using namespace std;

string removeOccurrence(string s, string part)
{
    while (s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main()
{
    string str = "daabcbaabcbc";
    cout << str << endl;
    cout << removeOccurrence(str, "abc") << endl;
}