#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    //the greatest element always stays at top
    pq.push(10);
    pq.push(102);
    pq.push(13);
    pq.push(17);
    pq.push(103);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}