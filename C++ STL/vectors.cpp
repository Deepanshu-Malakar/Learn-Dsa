#include<bits/stdc++.h>
using namespace std;


int main()
{
    //size of vector is not fixed so adding more elements is easy

    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.emplace_back(7);
    v.emplace_back(8);
    v.emplace_back(5);
    v.emplace_back(4);
    v.emplace_back(2);


    //copying elements to another vector
    vector<int> v2(v); //v2 contains same elements as v


    //printing a vector
    cout<<"creation of vector"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;


    //printing a vector using auto
    cout<<"printing a vector using auto"<<endl;
    for(auto it:v)
    {
        cout<<it;
    }
    cout<<endl;

    //erasing elements in vector
    cout<<"deleting element at 1st index"<<endl;

    v.erase(v.begin()+1);
    cout<<endl;

    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"erasing elements from 1st to 4th index"<<endl;
    //erasing multiple elements in a vector

    v.erase(v.begin()+1,v.begin()+4);

    for(auto it:v){
        cout<<it<<" ";

    }

    cout<<endl;

    //inserting elements in vector
    cout<<"inserting 300 at 1st index"<<endl;
    v.insert(v.begin()+1,300);//300 is inserted at 1st index
    //inserting multiple elements which are same

    cout<<"inserting 100,100 at 2nd index"<<endl;
    v.insert(v.begin()+2,2,100);//at 2nd and 3rd index 100 and 100 is inserted

    for(auto it:v){
        cout<<it<<" ";
    
    }
    cout<<endl;

    //checking size of vector
    cout<<"size of vector"<<endl;
    cout<<v.size()<<endl;

    //pop
    cout<<"popping last element"<<endl;
    v.pop_back();

    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    
    

    

    
    



}