// Problem Statement:
// You are given an array/list ARR consisting of N integers. Your task is to find
// all the distinct triplets presentin the array which adds up to a given number K.
// An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there
// exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.

#include <bits/stdc++.h>
using namespace std;

set<vector<int>> tripletSum(vector<int> &arr, int s)
{
    set<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.insert(temp);
                }
            }
        }
    }

    return ans;
}

int main()
{

    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, -3, 3, 3, -2};
    vector<int> arr3 = {10, 5, 5, 5, 2};

    set<vector<int>> sol = tripletSum(arr3, 12);
    // set to avoid duplicate

    for (auto i : sol)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}



