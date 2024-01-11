#include<iostream>
using namespace std;


// using call by reference for better memory optimization
// should be in 1 line
inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;
}

int main() {

    int a = 1, b = 2;
    int ans = 0; 

    ans = getMax(a,b);
    // while execution, auto replaced
    //   ans = (a>b) ? a : b;
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;



    return 0;
}