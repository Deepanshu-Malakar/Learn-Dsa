#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter Age: ";
    cin>>x;
    if(x<18){
        cout<<"not eligible for job";
    }
    else if(x>=18){
        if(x<55){
            cout<<"eligible for job";

        }
        
        else if(x>=55 && x<=57){
            cout<<"eligible for job, But retirement soon";
        }
        else{
            cout<<"retirement time";
        }
    }
    
    return 0;

}