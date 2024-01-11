#include <iostream>
using namespace std;

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

int main()
{
    int n;
    cout << "Enter rows: ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        // for space
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // first triangle
        //       1
        //     1 2
        //   1 2 3
        // 1 2 3 4

        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        // second triangle
        //
        //        1
        //        2 1
        //        3 2 1

        int start = i - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        i++;
    }
}
