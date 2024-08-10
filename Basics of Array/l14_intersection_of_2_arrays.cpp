#include <bits/stdc++.h>
using namespace std;

// problem statement:
// You are given two "sorted" arrays, find the intersection of the two arrays

int intersection(int a[], int n1, int b[], int n2, int c[])
{
    int k = 0;
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] == b[j] && (c[k - 1] != a[i] || k == 0))
        {
            c[k] = a[i];
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return k;
}

int main()
{

    int a[5] = {1, 2, 2, 3, 4};
    int b[7] = {1, 2, 4, 5, 6, 6, 7};
    int c[12];

    int k = intersection(a, 5, b, 7, c);

    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " , ";
    }

    return 0;
}