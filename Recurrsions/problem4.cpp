#include<bits/stdc++.h>
using namespace std;

int sum(int n,int i=1,int s=0)
{
    if(i<=n)
    {
        s=s+i;
        i+=1;
        sum(n,i,s);
    }
    else{
        cout<<s<<endl;
    }
}
int main()
{
    //using recurrsions print sum of first n natural numbers
    sum(10);

}