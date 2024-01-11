#include <bits/stdc++.h>
using namespace std;

char maxOccurrence(string s)
{
    int arr[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int num = 0;

        // lowercase
        if (ch >= 'a' && ch <= 'z')
        {
            num = ch - 'a';
        }

        // uppercase
        else
        {
            num = ch - 'A';
        }

        arr[num]++;
    }

    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = ans + 'a';
    return finalAns;
}

int main()
{
    string s;
    cout << "String: ";
    cin >> s;

    cout << "Max occurrence: " << maxOccurrence(s) << endl;

    return 0;
}