#include <bits/stdc++.h>
using namespace std;

int largest_element(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{

    int arr[] = {10, 3, 2, 4, 21, 3, 4};
    cout << "largest element = " << largest_element(arr, 7);
    return 0;
}