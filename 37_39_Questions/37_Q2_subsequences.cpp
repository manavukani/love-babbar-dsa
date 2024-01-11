#include <bits/stdc++.h>
using namespace std;

// &ans so that value of answer is changed at its address (otherwise, copy is created)
void solve(vector<string> &ans, string str, string output, int i)
{
    // base case
    if (i >= str.length())
    {
        // before returning need to store in ans
        // empty string is not included in soln
        if (output.length() > 0)
            ans.push_back(output);
        
        return;
    }

    // exclude
    solve(ans, str, output, i + 1);

    // include
    output.push_back(str[i]);
    solve(ans, str, output, i + 1);
}

vector<string> subsequences(string str)
{

    vector<string> ans;
    string output = "";
    solve(ans, str, output, 0);
    return ans;
}

int main()
{
    string str = "abc";
    vector<string> ans = subsequences(str);

    for (auto i : ans)
    {
        cout << i << endl;
    }
    cout << endl;
}
