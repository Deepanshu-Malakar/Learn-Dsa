#include <bits/stdc++.h>
using namespace std;

int is_sorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            return -1;
        }
    }
    return 1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << is_sorted(arr, 5);
}