/*
problem statement:
You are given an integer array with number of positive and negative elements not equal
rearrange the elements such that positive element is succeded by negative element and then positive
order of the elements should not change


example:
arr={1,4,-3,5,4,-5,6,7}
rearrangement = {1,-3,4,-5,5,4,6,7}
*/

#include <bits/stdc++.h>
using namespace std;

void rearrange_by_size(int a[], int n)
{
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            pos.push_back(a[i]);
        }
        else
        {
            neg.push_back(a[i]);
        }
    }
    int i = 0;
    int j = 0;
    int k = 0;
    int n1 = pos.size();
    int n2 = neg.size();
    while (i < n1 && j < n2)
    {
        if (k % 2 == 0)
        {
            a[k] = pos[i];
            k++;
            i++;
        }
        else
        {
            a[k] = neg[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        a[k]=pos[i];
        k++;i++;
    }
    while(j<n2){
        a[k]=neg[j];
        k++;j++;
    }
}


void show(int a[],int n){
    cout<<"{ ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" , ";
    }
    cout<<"}"<<endl;
}
int main()
{
    int a[]={1,4,-3,5,4,-5,6,7};
    int n= sizeof(a)/sizeof(int);
    show(a,n);
    rearrange_by_size(a,n);
    show(a,n);
}