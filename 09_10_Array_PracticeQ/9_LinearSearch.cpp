#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == key)
        {
            return 1;
            // return i; // for index, then change main code also
        }
    }

    return 0;
}

int main(){

    int arr[12]={1,2,3,14,5,6,-4,8,65,31,86,74};

    int key;
    cout << "Enter key to be searched: "<<endl;
    cin >> key;

    bool found = search(arr, 12, key);

    if(found)
        cout << "Key is present" << endl;
    else
        cout << "Key is absent" << endl;

    return 0;
}