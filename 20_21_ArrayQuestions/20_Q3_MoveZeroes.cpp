// preserve order and move all zeroes to back
// without making a copy of the array

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int nonZero = 0;

    for (int j = 0; j < nums.size(); j++)
    {
        // for nonzero, shift to left
        if (nums[j] != 0)
        {
            swap(nums[j], nums[nonZero]);
            nonZero++;
        }
        
        // ignore zeroes
    }
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
    moveZeroes(arr1);
    print(arr1);
    return 0;
}