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

int root(int number,int m){
    int low=0;
    int high = number;
    int mid = (low+high)/2;

    int possible_root=1;
    while(low<=high){
        mid = (low + high)/2;
        if(power(mid,m)==number){
            printf("possible root = %d  (equal case)\n",possible_root);
            return mid;
        }
        else if(power(mid,m)>number){
            high = mid-1;
            printf("possible root = %d (greater than case)\n",possible_root);
        }
        else if(power(mid,m)<number){
            possible_root=mid;
            low=mid+1;
            printf("possible root = %d (less than case)\n",possible_root);
        }
    }
    return possible_root;
}

int main(){
    int number = 27;
    int m = 3;

    cout<<m<<"th root of "<<number<<" is : "<<root(number,m);
    return 0;
}