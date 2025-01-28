#include <bits/stdc++.h>
using namespace std;

// you are given an array that is sorted but rotated and you have to find the element in it
// example: a=[7,8,9,1,2,3,4]  find 3 : index=5

// solve:
// find mid arr[mid]=1; not the element we are looking for
// check which half of the array is sorted so compare low and mid   and mid and high
// if arr[mid]>arr[low] then left half is sorted
// if arr[mid]<arr[high] then right half is sorted

// if right half is sorted:
//  check if arr[mid]< ele < arr[high] if yes then low=mid+1
//  else high = mid-1

// if left half is sorted:
// check if arr[low]<ele<arr[mid] if yes then high=mid-1
// else low=mid+1

char sorted_half(int array[], int low, int high, int mid)
{
    if (array[mid] >= array[low])
    {
        return 'L';
    }
    else if (array[mid] <= array[high])
    {
        return 'R';
    }
}

int rotated_Binary_Search(int array[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (array[mid] == element)
        {
            
            cout<<"Got answer\n";
            return mid;
        }
        if (sorted_half(array, low, high, mid) == 'R')
        {
            if (element > array[mid] && element < array[high])
            {
                low = mid + 1;
                cout<<"right half is sorted and element found at right\n";
                printf("low = %d mid =%d high=%d\n",low,mid,high);
            }
            else
            {
                high = mid - 1;
                cout<<"right half is sorted and element found at left\n";
                printf("low = %d mid =%d high=%d\n",low,mid,high);
            }
        }
        else if (sorted_half(array, low, high, mid) == 'L')
        {
            if (element > array[low] && element < array[mid])
            {
                high = mid - 1;
                cout<<"left half is sorted and element is found at left\n";
                printf("low = %d mid =%d high=%d\n",low,mid,high);
            }
            else
            {
                low = mid + 1;
                cout<<"left half is sorted and element is found at right\n";
                printf("low = %d mid =%d high=%d\n",low,mid,high);
            }
        }
    }
    return -1;
}

int main(){//    0  1  2  3 4 5 6 7 8  9  10 11 12
    int array[]={65,72,81,1,2,5,7,9,24,25,26,47,61};
    int size=sizeof(array)/sizeof(int);
    int ele=5;
    cout<<"element = "<<ele<<" is present at index = "<<rotated_Binary_Search(array,size,ele);
}

