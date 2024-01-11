#include <bits/stdc++.h>
using namespace std;

// mentos zindagi
int countPrimes(int n)
{

    int count = 0;

    // assume all are prime
    vector<bool> prime(n + 1, true);

    // n < 2 are not prime
    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;

            // Now set multiples of remaining numbers that are marked as prime to not prime.
            // Eg. non-prime -> 10 = 5*2
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    return count;
}

// Time Complexity : O(n*log(log(n))

int main()
{

    cout << "Enter a number: ";
    int n;
    cin >> n;

    cout << "No. of prime numbers less than " << n << " are: " << countPrimes(n);

    return 0;
}