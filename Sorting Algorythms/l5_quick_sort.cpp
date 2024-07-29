#include <bits/stdc++.h>
using namespace std;

int find_pivot(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {

        while (arr[i] <= pivot && i < high)
        {
            i++;
        }
        while (arr[j] > pivot && j > low)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[low]);

    return j;
}

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = find_pivot(arr, low, high);
        quick_sort(arr, low, pivot - 1);
        quick_sort(arr, pivot + 1, high);
    }
}

void show_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 4, 9, 2, 1};
    show_array(arr, 5);
    quick_sort(arr, 0, 4);
    show_array(arr, 5);
    return 0;
}