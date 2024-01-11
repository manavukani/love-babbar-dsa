#include<iostream>
using namespace std;

// int start=0 is default arg
// if not mentioned its taken as 0
void print(int arr[], int n  , int start = 0) {

    for(int i = start; i<n; i++) {
        cout << arr[i] << endl;
    }

}

int main() {

    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size); // uses default
    cout << endl;
    print(arr, size, 2); // uses user input


    return 0;
}

// note: default arg are calculated from right-most var