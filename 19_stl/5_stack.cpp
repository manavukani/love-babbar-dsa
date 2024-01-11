#include <bits/stdc++.h>
using namespace std;

// STACK - LIFO

int main(){

    stack<string> s;

    s.push("manav");
    s.push("manav ukani");
    s.push("manav 2");

    cout << "Top element: " << s.top() <<endl;
    s.pop();
    cout << "New top element: " << s.top() <<endl;
    cout << "Size: " <<s.size();

}