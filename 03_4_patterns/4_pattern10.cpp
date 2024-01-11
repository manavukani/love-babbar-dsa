#include <iostream>
using namespace std;

//       *
//     * *
//   * * *
// * * * *

int main()
{
    int n;
    cout << "Enter rows: ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        // for space
        int space = n-i;
        while (space)
        {
            cout << " ";
            space--;
        }
        
        // for star
        int j = 1;
        while (j <= i) //col <= row
        {

            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }
}


/*

Other such patterns

1 1 1 1
  2 2 2
    3 3
      4

      1
    2 2
  3 3 3
4 4 4 4

1 2 3 4
  2 3 4
    3 4
      4

      1
    2 3
  4 5 6
7 8 9 10

*/
