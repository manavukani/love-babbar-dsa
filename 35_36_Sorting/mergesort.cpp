#include <iostream>
using namespace std;

void merge(int *arr, int s, int mid, int e)
{
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // creating array
    int *first = new int[len1];
    int *second = new int[len2];

    // copying values into array
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // merge sorted 2 sorted array
    int i = 0;
    int j = 0;
    k = s; // main array index

    while (i < len1 && j < len2)
    {
        if (first[i] < second[j])
        {
            arr[k++] = first[i++];
        }
        else
            arr[k++] = second[j++];
    }

    while (i < len1)
    {
        arr[k++] = first[i++];
    }

    while (j < len2)
    {
        arr[k++] = second[j++];
    }

    // free memory
    delete[] first;
    delete[] second;
}
void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return; // Returns recursively
  
    }

    int mid = s + (e - s) / 2;

    // left
    mergeSort(arr, s, mid);
    // right
    mergeSort(arr, mid + 1, e);
    // merge
    merge(arr, s, mid, e);
}

int main()
{
    int arr[5] = {4, 7, 5, 9, 2};
    int n = 5;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Merge Sort is useful for sorting linked lists in O(nLogn) time.

In the case of linked lists, the case is different mainly due to the difference in memory allocation of arrays and linked lists. Unlike
arrays, linked list nodes my not be adjacent in memory. Unlike an array, in the linked list, we can insert items in the middle in O(1)
extra space and O(1) time. Therefore, the merge operation of merge sort can be implemented without extra space for linked lists.
In arrays, we can do random access as elements are contiguous in memory. Let us say we have an integer (4-byte) array A and let the
address of A[0] be x then to access A[i], we can directly access the memory at (x + i*4). Unlike arrays, we can not do random access in
the linked list. Quick Sort requires a lot of this kind of access. In a linked list to access i’th index, we have to travel each and
every node from the head to i’th node as we don’t have a continuous block of memory. Therefore, the overhead increases for quicksort.
Merge sort accesses data sequentially and the need of random access is low.
*/

/*
Disadvantages
->Slower for small task
-> Merge sort algorithm requires an additional memory space of 0(n) for the temporary array.
-> It goes through the whole process even if the array is sorted.
*/