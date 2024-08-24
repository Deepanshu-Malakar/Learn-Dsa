/*problem statement:
You are given an integer array
find the maximum sum of a subarray and also return  the subarray with maximum sum*/

#include <bits/stdc++.h>
using namespace std;


int kadane_algo(int a[], int n)
{   
    int start=0;
    int end=0;
    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (sum > maxi)
        {
            maxi = sum;
            end=i;
        }
        if (sum < 0)
        {   
            start=i+1;
            sum = 0;
        }
    }
    cout<<"maximum sum is :"<<maxi<<endl;
    for(int i=start;i<=end;i++){
        cout<<a[i]<<" , ";
    }
}
int main()
{
    int a[] = {1, 2, -3, 3, 8, 1, 4, -1};
    kadane_algo(a, 8);
}