// Given an array of integers arr, return true if
// number of occurrences of each value in the array is unique, or false otherwise.

// eg - 1 2 2 1 1 3
// 1 - 3
// 2 - 2
// 3 - 1
// return true (coz unique occurrence)

#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    // map will have frequency count
    // {1:3, 2:2, 3:1}

    map<int, int> mp;
    for (int x : arr)
    {
        mp[x] += 1;
    }

    // for set the result will either be 0 (not present) or 1 (present)
    // it.second = freq. count
    set<int> set;
    for (auto it : mp)
    {
        if (set.count(it.second) > 0)
            return false;
        else
            set.insert(it.second);
    }

    return true;
}

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    cout << uniqueOccurrences(arr);
}