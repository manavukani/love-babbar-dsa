#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << endl;
    // BINARY SEARCH
    vector<int> v;

    v.push_back(5);
    v.push_back(8);
    v.push_back(12);
    v.push_back(15);
    v.push_back(20);

    // needs to be ascending
    cout << "Finding 12: " << binary_search(v.begin(), v.end(), 12) << endl; // return binary

    // return iterator / index
    cout << "lower bound: " << lower_bound(v.begin(), v.end(), 8) - v.begin() << endl;
    cout << "upper bound: " << upper_bound(v.begin(), v.end(), 8) - v.begin() << endl;

    int a = 20;
    int b = 30;

    cout << endl;
    // MAX MIN SAWP
    cout << "max: " << max(a, b) << endl;
    cout << "min: " << min(a, b) << endl;
    swap(a, b);
    cout << "swapping: ";
    cout << a << " " << b << endl;

    string str = "abcdefg";
    reverse(str.begin(), str.end());
    cout << str << endl;
    
    cout << endl;


    // ROTATE
    rotate(v.begin(), v.begin() + 1, v.end()); // start, (kitna rotate), end
    
    cout << "before rotate: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "after rotate: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;


    cout << endl;

    
    // SORT - intro sort
    vector<int> s{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    sort(s.begin(), s.end());
 
    cout << "Sorted \n";
    for (auto i : s)
        cout << i << " ";
    cout << endl;
    
}