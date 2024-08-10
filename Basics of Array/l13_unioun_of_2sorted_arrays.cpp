#include <bits/stdc++.h>
using namespace std;

// .............................................................................................
// problem statement:

// you are given 2 sorted arrys
// return an array which contains the unioun of the 2 arrays
// .................................................................................

// approach:
// a={1,2,2,3,4}
//    i --->

// b={3,3,5,6,7,7}
//    j ---->

// c={}  empty array
// k-->

// among a[i] and b[j] whoever is smaller is added at c[k] if c[k-1] is not equal to it.

int unioun_of_2_sorted_arrays(int a[], int n1, int b[], int n2, int c[])
{
    // int c[n1 + n2];
    int k = 0;
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {

        if (a[i] <= b[j])
        {
            if (k == 0 || c[k - 1] != a[i])
            {
                c[k] = a[i];
                i++;
                k++;
            }
            else
            {
                i++;
            }
        }
        else
        {
            if (k == 0 || c[k - 1] != b[j])
            {
                c[k] = b[j];
                j++;
                k++;
            }
            else
            {
                j++;
            }
        }
    }
    while (i < n1)
    {
        if (k == 0 || c[k - 1] != a[i])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            i++;
        }
    }
    while (j < n2)
    {
        if (k == 0 || c[k - 1] != b[j])
        {
            c[k] = b[j];
            k++;
            j++;
        }
        else{
            j++;
        }
    }
    return k;
}

int main()
{
    int a[5] = {1, 2, 2, 3, 4};
    int b[6] = {3, 3, 5, 6, 7, 7};
    int c[11];

    int x=unioun_of_2_sorted_arrays(a, 5, b, 6, c);
    for (int i = 0; i < x; i++)
    {
        cout << c[i] << ", ";
    }
}