// Peak Index in a Mountain Array

#include <bits/stdc++.h>
using namespace std;


// optimized, using only one loop
int findPeak(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        // cout<<" s " << s <<" e " << e << endl;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[] = {1, 3, 8, 5, 2};
    cout << "Peak is at index: " << findPeak(arr, 6) << endl;
}