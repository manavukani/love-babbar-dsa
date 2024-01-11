// Given an array of length ‘N’, where each element denotes the position of a stall.
// Now you have 'N' stalls and 'K' cows that are aggressive
// Constraint - minimum distance between any two cows as large as possible
// return the largest minimum distance.

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> stalls, int k, int mid)
{
    int cowCount = 1;             // start with first cow
    int lastPosition = stalls[0]; // last position is the position where we kept first cow and from where we are measuring safe distance

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPosition >= mid)
        {
            // place cow => increement cow value count
            cowCount++;

            if (cowCount == k)
            {
                return true;
            }

            // update lastPosition of cow & keep checking on right side for further max value
            lastPosition = stalls[i];
        }
    }
    return false; // if not found till here -> no solution exists with this value of mid, so return false
}

int aggressiveCows(vector<int> stalls, int k)
{
    // sort stall array for getting a linear number line for code
    sort(stalls.begin(), stalls.end());

    int ans = -1;
    int n = stalls.size();
    
    int start = 0;
    int end = stalls[n - 1];
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(stalls, k, mid))
        {
            // possible solution
            // save in ans
            ans = mid;
            // move right - we need to find largest max distance
            start = mid + 1;
        }
        else
        {
            // solution not possible, move left
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    vector<int> stalls = {4, 2, 1, 3, 6};
    int n = stalls.size();
    int k = 2;

    cout << "Largest minimum distance: " << aggressiveCows(stalls, 2) << endl;
}