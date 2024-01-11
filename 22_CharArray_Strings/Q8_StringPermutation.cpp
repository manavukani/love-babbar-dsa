#include <bits/stdc++.h>
using namespace std;

bool checkEqual(int count1[26], int count2[26])
{

    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            return false;
        }
    }
    return true;
}

// permutation of s2 present in s1?
bool checkInclusion(string s1, string s2)
{
    // count characters
    int count1[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // traverse s2 using window of len = len of s1
    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    // running 1st window
    // prevent going out of string: i < s2.length()
    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2))
        return 1;

    // checking further window
    while (i < s2.length())
    {
        // inc new char count
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        // dec old char count
        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;

        i++;

        if (checkEqual(count1, count2))
            return 1;
    }

    return 0;
}

int main()
{
    cout << checkInclusion("ab", "eidbaooo") << endl;
}