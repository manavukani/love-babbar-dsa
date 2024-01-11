#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v)
{

    int s = 0;
    int e = v.size() - 1;

    while (s < e)
    {
        swap(v[s++], v[e--]);
    }

    return v;
}

void print(vector<int> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    vector<int> ans;

    int i = n - 1;
    int j = m - 1;

    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // third case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    cout << "Without reverse: ";
    print(ans);

    // since answer is coming reverse
    cout << "Final answer: ";
    return reverse(ans);
}

// M2
vector<int> arrSum(vector<int> &a, int n, vector<int> &b, int m)
{

    int x = a[0], y = b[0];

    // arr1 -> x
    for (int i = 1; i < n; i++)
    {
        x = x * 10 + a[i];
    }

    // arr2 -> y
    for (int i = 1; i < m; i++)
    {
        y = y * 10 + b[i];
    }

    x = x + y;

    // x -> vector
    vector<int> v;
    while (x != 0)
    {
        int d = x % 10;
        v.push_back(d);
        x = x / 10;
    }
    reverse(v.begin(), v.end());
    return v;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {6};

    print(findArraySum(arr1, 4, arr2, 1));
    cout << endl;

    cout << "Using M2" << endl;
    print(arrSum(arr1, 4, arr2, 1));
    cout << endl;

    // vector<int> arr3 = {1, 2, 3};
    // vector<int> arr4 = {9, 9};

    // print(findArraySum(arr3, 3, arr4, 2));

    return 0;
}
