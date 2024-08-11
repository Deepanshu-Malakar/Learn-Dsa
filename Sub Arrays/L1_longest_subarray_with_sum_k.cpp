#include <bits/stdc++.h>
using namespace std;

// problem statement
// You are given an array,
// find the length of the longest subarray who has the sum of elements = k

// subarrays are continuous elements of an array.
// example =>  array= {1,3,2,4}, subarray = {1} , {2} , {3} , {4} , {1,3} , {3,2} , {2,4} , {1,3,2} , {3,2,4} , {1,3,2,4}

int longest_subarray_sum_k(int a[], int n, int k)
{
    int max_length = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];
            if (sum == k && j - i + 1 > max_length)      //lenght of subarray at that point is j-i+1
            {
                max_length = j - i + 1;
                break;
            }
            else if (sum > k)
            {
                break;
            }
        }
    }
    return max_length;
}



int main()
{
    int a[] = {2, 3, 2, 1, 1, 1, 1, 1, 1, 4, 5};
    int k = 6; // sum
    int n = 11; // number of elements

    cout << "length of longest subarray is : " << longest_subarray_sum_k(a, n, k);
}