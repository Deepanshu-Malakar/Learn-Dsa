#include <bits/stdc++.h>
using namespace std;

// problrm statement:
//  you are given an array and a target. find 2 numbers in the array which add up to target and return their indexes.

int two_sum_k(int a[], int n, int k)     //brute force method..........
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {   
            // cout<<"i ="<<i<<" , "<<"j ="<<j<<endl;
            if (a[i]+a[j]==k)
            {
                cout << i << " , " << j<<endl;
                cout<<a[i]<<" + "<<a[j]<<" = "<<a[i]+a[j]<<endl;
                return 1;
            }
        }
    }
    cout << "-1";
    return -1;
}

int two_sum_better(int a[],int n,int k){
    //first hash the array...

    int hash[n];
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 4};
    int target = 7;
    two_sum_k(a, 6, 7);
}