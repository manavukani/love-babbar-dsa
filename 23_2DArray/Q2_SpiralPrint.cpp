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

// IMP
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col; // total elements

    // index initialize
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        // print starting row
        for (int i = startingCol; i <= endingCol && count < total; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        // print ending col
        for (int i = startingRow; i <= endingRow && count < total; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        // print ending row (rev)
        for (int i = endingCol; i >= startingCol && count < total; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        // print starting col (rev)
        for (int i = endingRow; i >= startingRow && count < total; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main()
{

    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Wave Print: " << endl;
    print(spiralOrder(arr));
}

// Time Complexity = m*n
// coz all elements traversed only once