#include <iostream>
using namespace std;

int getMax(int num[], int size){
    
    int max = INT32_MIN;
    
    for(int i=0; i<size; i++)
    {
        if (num[i] > max)
           max = num[i];
    }

    return max;
}

//inbuilt function for max
// ans = max(a, b)


int getMin(int num[], int size){
    
    int min = INT32_MAX; //can also use num[0]
    
    for(int i=0; i<size; i++)
    {
        if (num[i] < min)
           min = num[i];
    }

    return min;
}

//inbuilt function for min
// ans = min(a, b)

int main()
{

    int size;
    cin >> size;

    int num[100];

    // input
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    
    // print array
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    cout<< "Max is: " << getMax(num, size) << endl;
    cout<< "Min is: " << getMin(num, size) << endl;
}