#include <bits/stdc++.h>
using namespace std;

// &ans so that value of answer is changed at its address (otherwise, copy is created)
void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= nums.size())
    {
        // before returning need to store in ans
        ans.push_back(output);

        // return recursively
        return;
    }

    // exclude
    solve(nums, output, index + 1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    solve(nums, output, 0, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = subsets(nums);
    
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
