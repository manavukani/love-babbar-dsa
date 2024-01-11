// Here, Pivot => index whose left sum = right sum

#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &arr)
{
    int sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
    }

    int lsum = 0;
    int rsum = sum;

    for (int i = 0; i < arr.size(); i++)
    {
        rsum = rsum - arr[i];

        if (lsum == rsum)
        {
            return i;
        }

        lsum = lsum + arr[i];
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 7, 3, 6, 5, 6};
    cout << "Pivot is at index: " << findPivot(arr) << endl;
}