#include<bits/stdc++.h>
using namespace std;

int a[10];
int n=10;
int rear=-1;

void enqueue(int x){
    if(rear==n-1){
        cout<<"queue overflow"<<endl;
    }
    else{
        rear++;
        a[rear]=x;
    }
}

void dequeue(){
    if(rear==-1){cout<<"queue underflow"<<endl;}
    else{
        for(int i=0;i<rear;i++){
            a[i]=a[i+1];
        }
        rear--;
    }
}

void display(){
    for(int i=0;i<=rear;i++){
        cout<<a[i]<<endl;
    }
    cout<<"-----------------"<<endl;
}

int main(){
    enqueue(10);
    enqueue(1);
    enqueue(5);
    enqueue(2);
    display();
    dequeue();
    display();
    enqueue(14);
    display();
}