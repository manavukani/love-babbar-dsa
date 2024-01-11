#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{

    int n = nums.size();
    
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = nums[i];
    }

    // copy all elements to nums from temp
    nums=temp;
    
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

    vector<int> arr1 = {11,12,13,14,15};
    rotate(arr1,3);
    print(arr1);
    return 0;
}


/*
index    |   0  1  2  3  4  n  n+1  n+2sssssss
elements |   11 12 13 14 15

if k = 3; we need to move 15 to n+2 ie @2
(n+2)%n = 2
*/
