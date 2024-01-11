#include <bits/stdc++.h>
using namespace std;

// QUEUE - FIFO

int main()
{

    queue<string> q;

    q.push("manav");
    q.push("manav ukani");
    q.push("manav 2");

    cout << "Top element: " << q.front() << endl;
    q.pop();
    cout << "New top element: " << q.front() << endl;
    cout << "Size: " << q.size() << endl;
    q.empty();
    cout << "New Size: " << q.size() << endl;
}