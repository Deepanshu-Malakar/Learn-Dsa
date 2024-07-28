#include <bits/stdc++.h>
using namespace std;

int main()
{
    // queue means first in first out
    queue<int> q;
    q.push(5);
    q.push(56);
    q.push(53);
    q.push(52);
    q.push(52);
    q.push(51);

    cout << q.front() << " " << endl;
    cout << q.back() << " " << endl;
    q.pop();

    cout << q.front() << " " << endl;
    cout << q.back() << " " << endl;
}