// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter number: ";
    cin >> n;
       
    int m = n;
    int mask = 0;
    
    if(n == 0)
        return 1;
    
    while( m!=0) {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    
    int ans = (~n) & mask;
    
    cout << "Answer is: " << ans << endl;

    return 0;
}
 

/*
LOGIC (eg: 5)

   5 =  0000000.....00101
  ~5 =  1111111.....00010
mask =  0000000.....00111  (??)

req = 2 = 0000000....00010

that is (~5 & mask) = 2

to get mask
right shift n (5: 0000000.....00101) till 0
0000000.....00010
0000000.....00001
0000000.....00000

left shift it and or with 1 to get mask (0000000.....00111)
0000000.....00000
0000000.....00000 | 1 = 0000000.....00001
0000000.....00010 | 1 = 0000000.....00011
0000000.....00110 | 1 = 0000000.....00111

*/