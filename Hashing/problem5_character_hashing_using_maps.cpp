#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[] = "aabdesdsbce";
    map<char, int> mpp;

    for (int i = 0; i < 11; i++)
    {
        mpp[s[i]]++;
    }
    for (char c = 'a'; c <= 's'; c++)
    {
        if (mpp[c] != 0)
        {
            cout << c << " appears " << mpp[c] << " times " << endl;
        }
    }
    return 0;
}