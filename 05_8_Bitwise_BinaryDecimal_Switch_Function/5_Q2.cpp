// function that takes an unsigned integer and returns the number of '1' bits it has (called as Hamming Weight)

#include <iostream>
using namespace std;

int hammingWeight(uint32_t n)
{
    int count = 0;

    while (n != 0)
    {
        // checking last bit
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }

    return count;
}

int main()
{
    cout << "enter number: ";
    uint32_t n;
    cin >> n;

    cout << hammingWeight(n);
}