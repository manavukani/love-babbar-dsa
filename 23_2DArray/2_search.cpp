#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
                return true;
        }
    }

    return false;
}

int main()
{

    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,8};

    int trgt;
    cout << "Enter target: ";
    cin >> trgt;

    if (isPresent(arr, trgt, 3, 4))
    {
        cout << "is present" << endl;
    }
    else
        cout << "is not present" << endl;
}