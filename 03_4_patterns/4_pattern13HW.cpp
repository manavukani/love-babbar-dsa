#include <iostream>
using namespace std;

// For n = 5
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

int main()
{
    int n;
    cout << "Enter rows: ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        
        // first triangle
        // 1 2 3 4 5
        // 1 2 3 4 
        // 1 2 3 
        // 1 2
        // 1
        


        // second triangle
        //
        //         * *
        //       * * * *
        //     * * * * * *
        //   * * * * * * * *

        
        // third triagnle
        //           5 4 3 2 1
        //             4 3 2 1
        //               3 2 1
        //                 2 1
        //                   1





        cout << endl;
        i++;
    }
}
