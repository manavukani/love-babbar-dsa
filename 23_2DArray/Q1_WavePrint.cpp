#include <bits/stdc++.h>
using namespace std;

void print(vector<int> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

vector<int> wavePrint(vector<vector<int>> arr, int row, int col)
{
    vector<int> ans;

    for (int j = 0; j < col; j++)
    {
        if (j & 1)
        {
            // ODD -> Bottom to Top
            for (int i = row - 1; i >= 0; i--)
            {
                // cout << arr[i][j] << " ";
                ans.push_back(arr[i][j]);
            }
        }
        else
        {

            // EVEN -> Top to Bottom
            for (int i = 0; i < row; i++)
            {
                // cout << arr[i][j] << " ";
                ans.push_back(arr[i][j]);
            }
        }
    }

    return ans;
}

int main()
{

    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // print
    cout<<"Matrix: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"Wave Print: "<<endl;
    print(wavePrint(arr, 3, 4));
}

// time complexity = m*n