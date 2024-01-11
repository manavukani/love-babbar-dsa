#include <bits/stdc++.h>
#include<array> //no need if using bits
using namespace std;

int main(){

    int basic[5] = {0,1,2,3,4};
    array<int,6> a = {0,1,2,3,4,5};

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] <<endl;
    }
    
    cout << "Element at 2nd index is " << a.at(2) << endl;

    cout << "Empty or not: " << a.empty() << endl; //boolean

    cout << "First element: " << a.front() << endl;
    
    cout << "Last element: " << a.back() << endl;

}