#include <bits/stdc++.h>
using namespace std;
// print from 1 to n
int f(int n, int i)
{
    if (n >= i)
    {
        cout << i << endl;
        i++;
        f(n, i);
    }
}
int main()
{
    f(25,1);
}