#include <bits/stdc++.h>
using namespace std;

// arr[]={13,4,6,2,5}
// find the minimum and swap it with no with 0 index    {2,4,6,13,5}
// find the minimum from remaining array and do the same.......

int show(vector<int> v)
{
    for (auto it : v)
    {
        cout << it << " | ";
    }
}

int main()
{
    vector<int> v = {13, 4, 6, 2, 5};
    
    for (int j = 0; j < 5; j++)
    {
        int min_element = v[4];
        for (int i = j; i < 5; i++)
        {
            if (v[i] < min_element)
            {
                min_element = v[i];
            }
        }
        for (int i = j; i < 5; i++)
        {
            if (v[i] == min_element)
            {
                int temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }
    show(v);
}