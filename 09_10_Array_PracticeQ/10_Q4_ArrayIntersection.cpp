// You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order.
// You have to find the intersection of these two arrays.
// Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> arr2, int m)
{
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];

        for (int j = 0; j < m; j++)
        {
            // given array is in non-decreasing order
            if (element < arr2[j])
                break;

            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = INT16_MIN; // so that single element is not mapped multiple times
                break;
            }
        }
    }

    return ans;
}

// optimized - 2 pointer approach (IMP)
// Given array is in non-decreasing order

vector<int> findArrayInt(vector<int> &arr1, int n, vector<int> arr2, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
            j++;
    }
    return ans;
}

int main()
{

    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};

    vector<int> sol = findArrayInt(arr1, 6, arr2, 4);

    for (int i : sol)
    {
        cout << i << " ";
    }
}