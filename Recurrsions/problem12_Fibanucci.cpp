#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(n>2){
        return f(n-1)+f(n-2);
    }
}

int main()
{
    //for(int i=1;i<=100;i++){
    //    cout<<f(i)<<", ";
    //}
    //cout<<f(5)<<endl;
    int x=0,y=1;
    for(int i=0;i<100;i++){
        cout<<x<<", "<<y<<", ";
        x=x+y;
        y=x+y;

    }
}