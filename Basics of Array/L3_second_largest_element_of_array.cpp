#include <bits/stdc++.h>
using namespace std;

int second_largest(int arr[], int n)
{
    int largest = arr[0];
    int second_largest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] <= largest && arr[i] > second_largest)
        {
            second_largest = arr[i];
        }
    }
    return second_largest;
}
int main()
{
    int arr[] = {12, 2, 1, 34, 21, 4, 7, 9};
    cout << "second largest element =" << second_largest(arr, 8);
    return 0;
}