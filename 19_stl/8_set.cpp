#include <bits/stdc++.h>
using namespace std;

// SET - no duplicate, cannot modify, only insert and delete, is always sorted

int main()
{

    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(3);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Count - check if given element is present: " << s.count(2) << endl;

    // Find ?

}
