// problem statement
// You are given an integer array which contains price of stocks on ith day
// find the maximum profit that you can _make

// example:
// a={4,2,3,5,6,4,5}
// buy=2 sell = 6  profit=6-2=4

#include <bits/stdc++.h>
using namespace std;



int main()
{

    int a[] = {4, 1, 3, 5, 6, 4, 1};
    int n = sizeof(a) / sizeof(int);

    int max_profit = 0;

    int least_price = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] < least_price)
        {
            least_price = a[i - 1];
        }

        int profit = a[i] - least_price;
        if (profit > max_profit)
        {
            max_profit = profit;
        }
    }
    cout << "max profit is: " << max_profit;
}