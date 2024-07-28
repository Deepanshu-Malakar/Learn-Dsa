#include <bits/stdc++.h>
using namespace std;
// you will be given a string
// find out the occurence of each character in the string

int main()
{
    char s[] = "abcdabdef";
    vector<int> v = {0, 0, 0, 0, 0, 0};
    for (int i = 0; i <= 8; i++)
    {
        for (char c = 'a'; c <= 'f'; c++)
        {
            if (s[i] == c)
            {
                int x = c - 97;
                v[x]++;
            }
        }
    }

    // for (int it = 0; it <= 5; it++)
    //{
    for (char c = 'a'; c <= 'f'; c++)
    {
        int x = c - 97;
        cout << c << " appears " << v[x] << " times " << endl;
    }
    //}
}