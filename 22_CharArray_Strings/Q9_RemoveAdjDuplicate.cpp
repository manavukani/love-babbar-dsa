#include <bits/stdc++.h>
using namespace std;

// stack approachs
string removeDuplicates(string s)
{
    string res = "";

    for (char &c : s)
    {
        if (res.size() && c == res.back())
            res.pop_back();
        else
            res.push_back(c);
    }
    return res;
}

int main()
{
    string str = "azxxzy";
    cout << str << endl;
    cout << removeDuplicates(str) << endl;
}