#include <bits/stdc++.h>
using namespace std;

/*
Problem statement:
you are given an integer array of length n
you can choose elements from array in any order and form the longest secquence of consecutive integers

example:
{1,2,2,6,4,3,5,6,4,8,9,} => {1,2,3,4,5,6}
{1,2,2,3,4,4,5,6,6,8,9,} => {1,2,3,4,5,6}


Algorythm:
1] sort the array
2] remove the duplicates
3] 

*/
void show_arr(int a[], int n)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " , ";
    }
    cout << "}" << endl;
}
int find_pivot(int a[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = a[low];

    while (i < j)
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[low], a[j]);
    return j;
}
void quick_sort(int a[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int p = find_pivot(a, low, high);
    quick_sort(a, low, p - 1);
    quick_sort(a, p + 1, high);
}

int remove_duplicates(int a[], int n)
{
    int index = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            a[index] = a[i];
            index++;
        }
    }
    return index;
}

void longest_consecutive_secquence(int a[], int n)
{
    quick_sort(a, 0, n - 1);
    int t = remove_duplicates(a, n);
    int start = 0;
    int end = 0;
    int start_new = 0;
    int end_new = 0;
    int max_length = 0;
    int length = 1;
    int i = 0;
    while (i < t)
    {
        start_new = i;
        end_new=i;
        length = 1;
        while (a[i + 1] == a[i] + 1)
        {
            length++;
            end_new++;
            i++;
        }
        i++;
        if (length > max_length)
        {
            max_length = length;
            start = start_new;
            end = end_new;
        }
    }
    cout << "{ ";
    for (int i = start; i <= end; i++)
    {
        cout << a[i] << " , ";
    }
    cout << "}" << endl;
}

void test(int a[],int n){
    cout<<"TEST : ";
    show_arr(a,n);
    cout<<"RESULT : ";
    longest_consecutive_secquence(a,n);
    cout<<"---------------------------------"<<endl;
}

int main()
{
    int a[] = {4, 2, 2, 1, 5, 6, 1};
    int n1=sizeof(a)/sizeof(int);
    int b[] = {5,4,3,4,5,6,7,6,5,1};
    int n2=sizeof(b)/sizeof(int);
    int c[] = {5,3,5,6,7,6,5,1};
    int n3=sizeof(c)/sizeof(int);
    test(a,n1);
    test(b,n2);
    test(c,n3);
}