#include <bits/stdc++.h>
using namespace std;
// store the occurence of every element of array in another array
int count(int n, vector<int> hash)
{
    cout << n << " appears " << hash[n] << " times"<<endl;
}

int main()
{
    vector<int> v = {1, 2, 3, 2, 3, 3, 4, 2, 2, 1};
    vector<int> hash = {0, 0, 0, 0, 0};

    for (int index = 0; index < v.size(); index++)
    {
        for (int element = 0; element <= 4; element++)
        {
            if (v[index] == element)
            {
                hash[element] = hash[element] + 1;
            }
        }
    }

    for (int i = 0; i <= 4; i++)
    {
        count(i, hash);
    }
}