// whether a number is power of 2 or not

// logic: manually iterating till 2^31 and if number matches true
// cant use %, eg 7 => 7%2 = 3%2 = 1
// which is same as 8 > 4 > 2 > 1

#include <bits/stdc++.h>
using namespace std;

int powerOf2(int n)
{
    int ans = 1;

    for (int i = 0; i <= 30; i++)
    {

        // cout << " ans " << ans << endl;
        if (ans == n)
        {
            return 1;
        }

        if (ans < INT_MAX / 2)
            ans = ans * 2;
    }

    return 0;
}

int main()
{

    int n;
    cout << "Enter number: ";
    cin >> n;

    if (powerOf2 (n))
    {
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;
}