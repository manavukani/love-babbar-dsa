#include <bits/stdc++.h>
// #include<deque> //no need if using bits
using namespace std;

int main()
{

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();

    d.push_front(3);
    d.push_front(4);
    d.push_front(5);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "First index element " << d.at(1) << endl;

    cout << "Front " << d.front() << endl;
    cout << "Back " << d.back() << endl;
    cout << "Empty or not " << d.empty() << endl; // 1 = empty, 0 not empty

    d.erase(d.begin(), d.begin() + 1);
     for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

// d.clear();
// Erases all the elements. Note that this function only erases the
// elements, and that if the elements themselves are pointers, the
// pointed-to memory is not touched in any way. Managing the pointer is
// the user's responsibility.

}