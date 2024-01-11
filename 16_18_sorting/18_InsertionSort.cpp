#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr)
{
    // starting from second element
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // Compare key with each element on the left of it until an element smaller than it is found.
        
        // For descending order, change key<arr[j] to key>arr[j].
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }

        // copy temp value
        arr[j + 1] = key;
    }
}