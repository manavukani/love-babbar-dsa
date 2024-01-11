// #include<iostream>
#include<bits/stdc++.h>
#include<vector> // no need if using bits
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5,6,7};
    
    cout << "Capacity " << v.capacity() << endl;
    // capacity = assigned space
    // size = capacity used

    v.push_back(9);
    cout << "New capacity " << v.capacity() << endl;
    // capacity becomes double when overflow

    cout << "Size " << v.size() << endl;

    cout << "First element " << v.front() << endl;
    cout << "Last element " << v.back() << endl;
    cout << "2nd element " << v.at(2) << endl;

    v.pop_back();
    // Used to remove element

    v.clear();
    cout << "After clear size: " << v.size() << endl;

    vector<int> a(5,1);
    // 1,1,1,1,1

    // COPY to another vector
    vector<int> b(a);
    for (int i : b)
    {
        cout << i << " ";
    }
    
}