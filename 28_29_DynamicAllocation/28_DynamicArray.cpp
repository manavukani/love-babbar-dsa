#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int n;
    cin >> n;

    // variable size array
    int *arr = new int[n];

    // takign inputn in aray
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "answer is " << ans << endl;

    // // releases memory everytime #stack
    // while (true)
    // {
    //     int i = 5;
    // }

    // // releases the stack memory (int *ptr) everytime, but dynamic memory (new int) keeps on accumulating 
    // while (true)
    // {
    //     int *ptr = new int;
    // }

    return 0;
}