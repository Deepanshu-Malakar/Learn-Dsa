#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(int a[], int n)
{
    int count = 0;
    int maxOnes = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            count++;
        }
        else
        {
            if (count > maxOnes)
            {
                maxOnes = count;
            }
            count = 0;
        }
    }
    return maxOnes;
}

int main()
{
    int a[] = {1, 1, 2, 3, 1, 1, 1, 2, 5, 4, 1, 4, 1, 1, 1, 1, 3};
    int n = sizeof(a) / sizeof(int);

    cout << "maximum consecutive ones are : " << findMaxConsecutiveOnes(a, n);
}