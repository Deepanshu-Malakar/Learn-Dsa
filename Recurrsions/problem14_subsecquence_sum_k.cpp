#include <bits/stdc++.h>
using namespace std;
// subsecquences with sum=k
int show(vector<int> v)
{
    cout << "{";
    for (auto it : v)
    {
        cout << it << ", ";
    }
    cout << "}" << endl;
}

int s(vector<int> v)
{
    int s = 0;
    for (auto it : v)
    {
        s = s + it;
    }
    return s;
}
int sub(vector<int> v, vector<int> b, int n, int k, int i = 0)
{
    if (i >= n)
    {

        if (s(b) == k)
        {
            show(b);
        }
    }

    b.push_back(v[i]);
    sub(v, b, n, k, i++);
    b.pop_back();
    sub(v, b, n, k, i++);
}
int main()
{
    vector<int> b;
    vector<int> c={10,20,30};
    sub({10, 20, 30}, b, 3, 30);
    cout<<"hello world";
}