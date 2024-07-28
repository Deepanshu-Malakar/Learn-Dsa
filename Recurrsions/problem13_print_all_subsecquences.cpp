#include <bits/stdc++.h>
using namespace std;
int show(vector<int> v)
{
    cout << "{";
    for (auto it : v)
    {
        cout << it << ", ";
    }
    cout << "}"
         << ", ";
}
int sub(vector<int> v, vector<int> b, int n, int index = 0)
{
    if (index >= n)
    {
        show(b);
        return 0;
    }

    b.push_back(v[index]);
    sub(v, b, n, index + 1);
    b.pop_back();
    sub(v, b, n, index+1);
}
int main()
{
    vector<int> b;
    sub({10, 20, 30}, b, 3);
}