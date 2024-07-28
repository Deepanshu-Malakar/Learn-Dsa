#include<bits/stdc++.h>
using namespace std;
//print from n to 1
int f(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        n--;
        f(n);
    }
}
int main()
{
    f(25);
    return 0;
}