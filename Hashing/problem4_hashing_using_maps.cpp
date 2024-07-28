#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 3, 4, 2, 3, 4, 5, 4, 3, 2, 3, 2, 4};
    map<int, int> mpp;

    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }

    for (int i = 0; i <= 5; i++)
    {
        cout << i << " appears " << mpp[i] << " times " << endl;
    }
    return 0;
}