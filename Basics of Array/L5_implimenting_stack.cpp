#include <bits/stdc++.h>
using namespace std;

int top = -1;
int n = 10;
int a[10];

void push(int x)
{
    if (top == n - 1)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        top++;
        a[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        a[top] = 231;
        top--;
    }
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << a[i] << endl;
    }
}

int main(){
    push(10);
    push(1);
    push(2);
    display();
    cout<<"---------------"<<endl;
    pop();
    display();
}