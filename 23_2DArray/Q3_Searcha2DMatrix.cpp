#include <bits/stdc++.h>
using namespace std;

// given a sorted array row-wise
// use binary search

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int s = 0;
    int e = row * col - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        int element = matrix[mid / col][mid % col];

        if (element == target)
        {
            return true;
        }

        else if (element < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return false;
}

int main()
{

    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    int trgt;
    cout << "Enter target: ";
    cin >> trgt;

    if (searchMatrix(arr, trgt))
    {
        cout << "is present" << endl;
    }
    else
        cout << "is not present" << endl;
}

// time complexity = log(m*n)