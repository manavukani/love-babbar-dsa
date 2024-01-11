// array represents the boards and each element of the given array represents the length of each board
// N number of boards and  K numbers of painters are available to paint these boards.
// Consider that each unit of a board takes 1 unit of time to paint.
// return - the minimum time required to get the job done.
// constraint - painters paint the continuous sections of boards only

// similar to book allocation

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int painterCount = 1;
    int wallsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (wallsum + arr[i] <= mid)
        {
            wallsum += arr[i];
        }
        else
        {
            painterCount++;
            if (painterCount > m || arr[i] > mid)
            {
                return false;
            }
            wallsum = arr[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> arr, int m)
{
    int n = arr.size();
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {5,5,5,5};
    int m = 2; // painters

    cout << "Minimum time to get this job done of painting all the N boards: " << findLargestMinDistance(arr, m) << endl;
}