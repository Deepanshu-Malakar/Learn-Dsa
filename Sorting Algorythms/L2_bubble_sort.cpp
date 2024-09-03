#include <bits/stdc++.h>
using namespace std;
// theory

// a={23,3,4,32,21}
// compare the first 2 adjacent elements and swap them if they are not sorted

// step1==>{3,23,4,32,21}==>{3,4,23,32,21}==>{3,4,23,32,21}==>{3,4,23,21,32}   biggest element comes at last place

// step2==>{3,4,23,21,32}==>{3,4,23,21,32}==>{3,4,21,23,32}==>{3,4,21,23,32}

// time complexcity = O(n^2)

int main()
{
    vector<int> v = {23, 3, 4, 32, 21};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = temp;
            }
        }
    }

    for (auto it : v)
    {
        cout << it << " ,";
    }
}