#include <bits/stdc++.h>
using namespace std;


// &ans so that value of answer is changed at its address (otherwise, copy is created)
void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
{

    // base case
    if (index >= digit.length())
    {
        // before returning need to store in ans
        ans.push_back(output);

        return;
    }

    int number = digit[index] - '0'; // gives index for mapping
    
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index + 1, ans, mapping);
        // need to go back to original state, where we don't want the letter to be present
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> ans;

    // for empty string
    if (digits.length() == 0)
        return ans;

    string output;

    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    int index = 0;
    solve(digits, output, index, ans, mapping);
    
    return ans;
}

int main(){

    string str = "34";
    vector<string> ans = letterCombinations(str);

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}