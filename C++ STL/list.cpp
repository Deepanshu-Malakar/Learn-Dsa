#include<bits/stdc++.h>
using namespace std;

int show(list<int> l){
    for(auto it:l){
        cout<<it<<" ";
    }
    cout<<endl;
}
int sum(int a,int b)
{
    return a+b;
}

int main()
{
    list<int> l;
    l.push_back(5);
    l.emplace_back(10);
    l.emplace_back(30);
    l.emplace_back(400);

    for(auto it:l)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    //using pushfront
    cout<<"inserting 100 at front using push_front"<<endl;

    l.push_front(100);
    show(l);

    //all the operations that you can perform using vector , you can do that using list as well
    cout<<"pooping the front element"<<endl;
    l.pop_front();
    show(l);
    
}