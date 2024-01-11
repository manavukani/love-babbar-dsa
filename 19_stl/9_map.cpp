#include <bits/stdc++.h>
using namespace std;

// MAP - same key can't point 2 value
// O(log n) - coz done through red and black tree
// hash mapping has O(1)

int main()
{

    map<int, string> m; // ordered map

    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m.insert( {5, "five"} );

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 5: " << m.count(5) << endl;

    // ERASE
    m.erase(5);
    cout << "finding 5: " << m.count(5) << endl;


}