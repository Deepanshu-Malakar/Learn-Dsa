#include <bits/stdc++.h>
using namespace std;
// arr={1,2,3,1,3,2}
// find how many times does a particular number appears in an array

int count(vector<int> v, int x)
{
    int c = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            c++;
        }
    }
    cout<<c;
}

int main()
{
    vector<int> arr = {1, 2, 1, 3, 2};
    count(arr, 1);
}