#include <bits/stdc++.h>
using namespace std;

// LINKED LIST

int main()
{

    list<int> l;

    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;


    l.erase(l.begin()); // deletes single element
    cout << " after erase " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "size of list " << l.size() << endl;

    // COPY list
    cout << "copy of l: ";
    list <int> l2(l);
    for (int i : l2)
    {
        cout << i << " ";
    }
    cout << endl;

    // INITIALIZE
    cout << "n: ";
    list <int> n(5, 100);
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;


    // ERASE + use of iterator
    list<int> a = {1,2,3,4,5,6,7,8,11,18,20,9,9};
    a.sort();
    for(int i : a){
        cout << i << " ";
    }cout << endl;
    
    list<int>::iterator it = a.begin();
    list<int>::iterator it2 = a.begin();
    it2++;
    it2++;

    a.erase(it, it2);
    for(int i : a){
        cout << i << " ";
    }cout << endl;

}