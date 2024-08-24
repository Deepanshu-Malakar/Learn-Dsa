// Problem statement:
// you are given an integer array of size n
// your task is to find the element in the array that appered more than n/2 times

#include <bits/stdc++.h>
using namespace std;

int n = 15;
int a[15] = {1, 2, 3, 4, 3, 2, 3, 3, 3, 3, 1, 3, 3, 2, 1};

int main()
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[a[i]]++;
        if(mpp[a[i]]>n/2){
            cout<<"majority element is :"<<a[i];
            return 0;
        }
    }
    cout<<"no majority element found: ";
    return -1;

}