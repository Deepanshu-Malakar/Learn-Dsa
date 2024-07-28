#include <bits/stdc++.h>
using namespace std;
int count = 0;
int f(string name,int count)
{
    if(count > 0)
    {
        cout << name << endl;
        count--;
        f(name,count);
    }
    
}
int main()
{
    // print name 5 times using recurrsions

    f("Rohan",5);
}