// 2M + 1 size array where M numbers are present twice and only one number is present once
// Print the Unique number
// Logic

/*
XOR Property
a ^ a = 0
0 ^ a = a

Here
1 2 3 4 3 2 1
=> 1 ^ 2 ^ 3 ^ 4 ^ 3 ^ 2 ^ 1
=> 0 ^ 0 ^ 0 ^ 4 (1 ^ 1 = 0, 2 ^ 2 = 0, ....)
=> 4
*/


#include<iostream>
using namespace std;

int findUnique(int arr[], int size){

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i]; // if same element XOR => 0
    }
    
    return ans;
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}


int main() {

    int arr[7] = {1,2,3,4,3,2,1};

    printArray(arr, 7);
    cout << findUnique(arr, 7);


    return 0;
}
