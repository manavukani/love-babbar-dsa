// Merge nums1 and nums2 without using another array

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1;     // nums1's index (actual nums)
    int j = n - 1;     // nums2's index
    int k = m + n - 1; // nums1's index (next filled position)

    while (j >= 0)
        if (i >= 0 && nums1[i] > nums2[j])
            nums1[k--] = nums1[i--];
        else
            nums1[k--] = nums2[j--];
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

    vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};

    merge(arr1, 3, arr2, 3);

    print(arr1);

    return 0;
}