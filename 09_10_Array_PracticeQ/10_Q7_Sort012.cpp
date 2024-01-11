// You have been given an integer array/list(ARR) of size 'N'.
// It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

// Sort 0 1

// M1 - sort function
// M2 - count 0 & 1, then make an array accordingly
// M3 - 2 pointer approach

#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort01(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        while (arr[left] == 0 && left < right)
            left++;
        while (arr[right] == 1 && left < right)
            right--;

        // left == 1 and right == 0
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void sort012(int arr[], int n)
{
    int lo = 0;
    int hi = n - 1;
    int mid = 0;

    // Iterate till all the elements
    // are sorted
    while (mid <= hi)
    {
        switch (arr[mid])
        {

        // If the element is 0
        case 0:
            swap(arr[lo], arr[mid]);
            lo++;
            mid++;
            break;

        // If the element is 1
        case 1:
            mid++;
            break;

        // If the element is 2
        case 2:
            swap(arr[mid], arr[hi]);
            hi--;
            break;
        }
    }
}

int main()
{
    // int arr[8] = {1, 0, 1, 0, 1, 0, 1, 1};
    int arr1[] = {1, 1, 0, 0, 0, 0, 1, 0};
    int arr2[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1, 2, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    sort01(arr1, n1);
    printArr(arr1, n1);
    sort012(arr2, n2);
    printArr(arr2, n2);
}