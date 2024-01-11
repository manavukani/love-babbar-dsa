#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "Bitwise Operator" << endl;
    cout << " a&b " << (a & b) << endl; // any number when & with 1, if gives 1 its odd
    cout << " a|b " << (a | b) << endl;
    cout << " ~a " << (~a) << endl;
    cout << " a^b " << (a ^ b) << endl;

    cout << endl;

    cout << "Left / Right Shift Operator" << endl;
    cout << " 17 >> 1 " << (17 >> 1) << endl; // 17/2 = 8.5 => 8
    cout << " 17 >> 2 " << (17 >> 2) << endl; // 17/2 = 8.5 => 8/2 = 4
    cout << " 21 << 2 " << (21 << 2) << endl; // 21*2 = 42*2 = 84

    cout << endl;

    cout << "Pre/Post Inc/Dec" << endl;
    int x = 4;
    cout << " ++a " << ++x << endl;
    int y = 4;
    cout << " a++ " << y++ << endl;
    int z = 4;
    cout << " --a " << --z << endl;
    int w = 4;
    cout << " a-- " << w-- << endl;
}

/*

4    100  |  4    100  |  4    100
6  & 110  |  6  | 110  |  6  ^ 110
---------   ------------ ------------
4    100  |  6    110  |  2    010

4:  0000000....000100
~4: 1111111....111011 => 2's complement = 5
hence -5

*/

/*

Left Shift Operator "<<"

5 << 1
00000000000101
00000000001010

3 << 2
00000000000011
00000000001100

CAUTION: may result in -ve numbers
01000000.... < 1   gives  10000000....

Right Shift Operator ">>"

5 >> 1
00000000000101
00000000000010

*/