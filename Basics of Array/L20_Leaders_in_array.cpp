#include <bits/stdc++.h>
using namespace std;

/*
Problem statement:
you are given an integer array of size n
An element is said to be a leader if all elements to the right of it are smaller than it

Example:
a={21,3,4,5,4,6,3,2}
leaders: {21,6,3,2}

Algorythm:
start from the end of array:  i=n-1
create a new array to store the leaders say l
store a[n-1] in l and decrement i
create a new variable max_element
set max_element = a[n-1]
if a[i]>max_element set max_element to a[i] and append a[i] to leader array
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

int leaders(int a[], int n)
{
    int l[n];
    int index = 0;
    l[index] = a[n - 1];
    index++;
    int max_element = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > max_element)
        {
            l[index] = a[i];
            max_element = a[i];
            index++;
        }
    }
    int size = index;
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        int temp = l[i];
        l[i] = l[j];
        l[j] = temp;

        i++;
        j--;
    }
    show_arr(l, size);
    return size;
}

void test(int a[], int n)
{
    cout << "Test : ";
    show_arr(a, n);
    cout << "Result : ";
    leaders(a, n);
    cout << "-------------" << endl;
}

int main()
{
    cout << "-------------" << endl;
    int a[] = {21, 3, 4, 5, 4, 6, 3, 2};
    int n1 = sizeof(a) / sizeof(int);
    test(a, n1);
    int b[] = {4,31,2,4,3,2,1};
    int n2 = sizeof(b) / sizeof(int);
    test(b, n2);
    int c[] = {9,3,5,4,1,2};
    int n3 = sizeof(c) / sizeof(int);
    test(c, n3);
    return 0;
}