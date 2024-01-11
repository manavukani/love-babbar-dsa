#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void swapAlternate(int arr[], int size)
{

    for (int i = 0; i < size; i = i + 2)
    // i = i + 2 for skipping 1 index, otherwise one element will be swapped twice
    {
        if (i + 1 < size) // for not exceeding array, last element checker
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int arr[6] = {1, 3, 2, 7, 11, 12};

    swapAlternate(arr, 6);
    printArray(arr, 6);

    return 0;
}