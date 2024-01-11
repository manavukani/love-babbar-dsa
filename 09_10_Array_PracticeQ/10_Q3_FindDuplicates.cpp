// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4.
// Hence, the answer is 4 in this case.

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    // XOR array elements
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR 1 to n-1
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{

    // vector<int> arr = {1, 2, 3, 4, 4};
    vector<int> arr = {5,1,2,3,4,2};
    cout << findDuplicate(arr);

}