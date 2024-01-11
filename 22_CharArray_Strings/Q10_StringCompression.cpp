#include <bits/stdc++.h>
using namespace std;

void print(vector<char> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int compress(vector<char> chars)
{
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();

    while (i < n)
    {
        // next element
        int j = i + 1;

        // compare current and next element (i & j)
        while (chars[i] == chars[j] && j < n)
        {
            j++;
        }
        // whole vector traversed or new char found at j

        // store old char
        chars[ansIndex++] = chars[i];

        // j = new char, i = first occ
        int count = j - i;

        // need to print count if count > 1
        if (count > 1)
        {
            // converting count in single digit
            string st = to_string(count);
            for (char ch : st)
            {
                chars[ansIndex++] = ch;
            }
        }

        // update for next occ, new char at j
        i = j;
    }

    print(chars);
    return ansIndex;
}


int main()
{

    vector<char> arr = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    cout << compress(arr) << endl;
    // Return 6
}