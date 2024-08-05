#include <bits/stdc++.h>
using namespace std;

int remove_zeroes(int a[], int n)
{
    int i = 0;
    int pointer = 0;

    while (i < n)
    {
        if (a[i] == 0)
        {
            i++;
        }
        else
        {
            a[pointer] = a[i];
            i++;
            pointer++;
        }
    }

    while (pointer < n)
    {
        a[pointer] = 0;
        pointer++;
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
    int a[] = {1, 2, 0, 3, 2, 0, 0, 1, 2};
    remove_zeroes(a,9);
    show(a,9);
}