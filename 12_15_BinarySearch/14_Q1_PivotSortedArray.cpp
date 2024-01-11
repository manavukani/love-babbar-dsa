// Good question
// O(logn)

// You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
// Now the array is rotated at some pivot point unknown to you. For example, if ARR = [ 1, 3, 5, 7, 8].
// Then after rotating ARR at index 3, the array will be ARR = [7, 8, 1, 3, 5].
// Now, your task is to find the index at which ‘K’ is present in ARR.

#include <bits/stdc++.h>
using namespace std;

// finding pivot, index where if we divide in 2 parts both are sorted (will be the minimum element)
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e=mid;
        }

        mid = s + (e - s) / 2;
    }

    return s;
    // return e;
}

int binarySearch(int arr[], int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}


// search in sorted and rotated array
int findPosition(int arr[], int n, int target)
{
    int pivot = getPivot(arr, n);

    // k = target element
    if( target >= arr[pivot] && target <= arr[n-1])
    {//BS on second line
        return binarySearch(arr, pivot, n-1, target);
    }
    else
    {//BS on first line
        return binarySearch(arr, 0, pivot - 1, target);
    }
    
}


int main()
{
    int arr[5] = { 12, 15, 18, 2, 4};
    cout << "Pivot is at index: " << getPivot(arr,5) << endl;
    cout << "Target is at index: " << findPosition(arr, 5, 15);
}