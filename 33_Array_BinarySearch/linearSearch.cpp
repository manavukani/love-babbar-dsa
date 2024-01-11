#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int n, int target)
{

    if (n == 0)
        return false;

    if (arr[0] == target)
        return true;
    else
    {
        bool remainingPart = linearSearch(arr + 1, n - 1, target);
        return remainingPart;
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    bool ans = linearSearch(arr, 5, 4);

    if (ans)
    {
        cout << "Is present";
    }
    else
    {
        cout << "Is absent";
    }
    return 0;
}