#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int count = 0;
    for (int i = 1; i < nums.size(); i++)
        if (nums[i] < nums[i - 1])
            count++;


    if (nums[nums.size() - 1] > nums[0])
        count++;

    return count <= 1;
    // true if count <= 1
    // else false
}

void print(vector<int> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> arr1 = {0, 1, 0, 3, 12};
    vector<int> arr2 = {3, 4, 5, 1, 2};
    cout << check(arr1) << endl;
    cout << check(arr2) << endl;

    return 0;
}