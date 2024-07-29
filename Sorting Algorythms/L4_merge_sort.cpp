#include <bits/stdc++.h>
using namespace std;

// devide and merge.........
//
void merge_sorted_array(int v[], int low, int mid, int high)
{
    vector<int> b;
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high)
    {
        if (v[i] < v[j])
        {
            b.push_back(v[i]);
            i++;
        }
        else
        {
            b.push_back(v[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        b.push_back(v[i]);
        i++;
    }
    while (j <= high)
    {
        b.push_back(v[j]);
        j++;
    }
    for(int i=low;i<=high;i++){
        v[i]=b[i-low];
    }
}

void merge_sort(int v[], int low, int high)
{
    if (low >= high){return;}
    
        int i = low;
        int j = high;
        int mid = (low + high) / 2;
        merge_sort(v, low, mid);
        merge_sort(v, mid + 1, high);
        merge_sorted_array(v, low, mid, high);
    
}



void show(int v[],int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<", ";
    }
}

int main()
{
    int v[] = {10, 5, 4, 7, 8, 9};
    merge_sort(v,0,5);
    show(v,6);
    int a=5;
    int b=6;
    
}
