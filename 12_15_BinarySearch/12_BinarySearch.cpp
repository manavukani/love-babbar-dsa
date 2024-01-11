#include <iostream>
using namespace std;

// need to be always monotonic (increasing or decreasing)

int BinarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end) // if they cross, key not found, so return -1
    {

        if (key == arr[mid])
        {
            return mid;
        }

        // go to right part
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else // key < arr[mid]
        {
            end = mid - 1;
        }

        // optimization
        mid = start + ((end - start) / 2);
        // same as (s+e)/2 but would prevent overflow
    }

    return -1;
}

int main()
{

    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[5] = {2, 5, 8, 56, 45};

    int evenIndex = BinarySearch(even, 6, 5);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = BinarySearch(odd, 5, 14);

    cout << " Index of 14 is " << oddIndex << endl;
}