#include <bits/stdc++.h>
using namespace std;


// problem statement
//  you are given an integer array
//  find the next permutation of the array
//  example:  {1,2,1,2}=>{1,2,2,1}
//  {1,3,4,3,2}=>{1,4,2,3,3}
//  {1,3,5,4,3,2}=>{1,4,2,3,3,5}

// Algorythm:
// 1) find the longest prefix  . how?  well start from the last of array and find the first index where a[i]<a[i+1]
// 2) at the index i where a[i] < a[i+1] traverse in forward direction and find index j where a[j]<=a[i] then swap (a[i] and a[j-1])
// 3) now reverse the array from index i+1

void next_permutation(int a[], int n)
{
    int i = n - 2;
    while (a[i] > a[i + 1])
    {
        i--;
    }
    int j = i + 1;
    while (a[j] > a[i])
    {
        j++;
    }
    j--;
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;

    i++;
    j = n - 1;
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

void show_arr(int a[], int n)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " , ";
    }
    cout << "}" << endl;
}

void test(int a[], int n)
{
    cout << "Test : ";
    show_arr(a, n);
    cout << "Result : ";
    next_permutation(a,n);
    show_arr(a, n);
    cout << "--------------" << endl;
}
int main()
{
    cout << "--------------" << endl;
    int a[] = {1, 3, 5, 4, 3, 2};
    int n1 = sizeof(a) / sizeof(int);
    int b[] = {1,2,1,2};
    int n2 = sizeof(b) / sizeof(int);
    int c[] = {1,3,4,3,2};
    int n3 = sizeof(c) / sizeof(int);

    test(a,n1);
    test(b,n2);
    test(c,n3);
    return 0;
}