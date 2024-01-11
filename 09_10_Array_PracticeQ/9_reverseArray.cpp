#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
}

void reverse(int arr[], int size){

    int start = 0;
    int end = size-1;

    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}


int main(){

    int arr[6]={1,2,3,4,5,6};
    int oddrr[5] = {1,3,5,7,9};

    reverse(arr, 6);
    reverse(oddrr, 5);

    printArray(arr, 6);
    printArray(oddrr, 5);

    return 0;
}