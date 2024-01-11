#include <bits/stdc++.h>
using namespace std;

// smallest element
// laake , usko right
// jagah pr place kardete hai

// 7 1 4 3 9 => i = 0
// 1 7 4 3 9 => i = 1
// 1 2 4 7 9 => i = 2

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++) // dont need to check next for last element
    {
        int minIndex = i;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

// space complexity : O(1)
// time complexity : O (n^2)