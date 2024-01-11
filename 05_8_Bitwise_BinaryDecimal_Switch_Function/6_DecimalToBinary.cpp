#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter num: ";
    cin >> n;
    
    int ans = 0, i = 0;
    while (n != 0)
    {

        int bit = n & 1;

        ans = ans + (bit * pow(10, i));

        n = n >> 1;
        i++;
    }

    cout << "Answer is " << ans << endl;
}

// above logic right, working online compiler
// but not working vs code for 5, 7, 15, 17, 19.....




// // C++ program to convert a decimal
// // number to binary number

// #include <iostream>
// using namespace std;

// // function to convert decimal to binary
// void decToBinary(int n)
// {
//     // array to store binary number
//     int binaryNum[32];

//     // counter for binary array
//     int i = 0;
//     while (n > 0) {

//         // storing remainder in binary array
//         binaryNum[i] = n % 2;
//         n = n / 2;
//         i++;
//     }

//     // printing binary array in reverse order
//     for (int j = i - 1; j >= 0; j--)
//         cout << binaryNum[j];
// }

// // Driver program to test above function
// int main()
// {
//     int n = 5;
//     decToBinary(n);
//     return 0;
// }