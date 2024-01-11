#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    
    // if not found
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1; // find on left side
        }

        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1; // find on right side
        }

        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

// O(logn) instead of O(n) through linear searching
int totalOcc(int arr[], int n, int key)
{
    int x = firstOcc(arr, n, key);
    int y = lastOcc(arr, n, key);

    return (y - x + 1);
}

int main()
{
    // must be sorted array
    int arr[] = {1, 2, 3, 3, 5};

    cout << "First occurrence: " << firstOcc(arr, 6, 3) << endl;
    cout << "Last occurrence: " << lastOcc(arr, 6, 3) << endl;
    cout << "Total occurrence: " << totalOcc(arr, 6, 3) << endl;
}