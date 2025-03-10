#include<bits/stdc++.h>
using namespace std;

int power(int number,int p){
    int low = 1;
    if(p == 1){
        return number;
    }
    else if ( p == 0){
        return 1;
    }
    else{
        int x = p/2;
        int product = power(number,x)*power(number,p-x);
        return product;
    }
}

int main(){
    int number = 2;
    int p = 10;

    cout<<number<<" raised to power of "<<p<<" is: "<<power(number,p);
}