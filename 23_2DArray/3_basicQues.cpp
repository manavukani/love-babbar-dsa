#include <bits/stdc++.h>
using namespace std;

void rowSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
}

void colSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }
}

int largestRow(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }

        if (maxi < sum)
        {
            maxi = sum;
            rowIndex = i;
        }
    }

    cout << "Maximum Sum = " << maxi << endl;
    return rowIndex;
}

int main()
{

    int arr[3][4];

    cout << "Enter matrix: ";
    // input -> row wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Row-wise sum: ";
    rowSum(arr, 3, 4);

    cout << endl;

    cout << "Column-wise sum: ";
    colSum(arr, 3, 4);

    cout << endl;
    cout << "Row Index: " << largestRow(arr, 3, 4);
}