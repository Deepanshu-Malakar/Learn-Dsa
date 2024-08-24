/*
problem statement:
You are given an integer array with positive as well as negative elements
rearrange the elements such that positive element is succeded by negative element and then positive
order of the elements should not change

example:
arr={1,4,-3,5,-4,-5,6,-7}
rearrangement = {1,-3,4,-4,5,-5,6,-7}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 4, -3, 5, -4, -5, 6, -7};
    int n = sizeof(arr) / sizeof(int);

    int ans[n];
    int pos_pos = 0;
    int neg_pos = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            ans[pos_pos] = arr[i];
            pos_pos += 2;
        }
        else
        {
            ans[neg_pos] = arr[i];
            neg_pos += 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " , ";
    }
}