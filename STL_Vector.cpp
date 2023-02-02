#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v ;
    

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    
    int size = v.size();
    
    for(int i=0; i<size;i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    cout<<"element at 2nd index "<<v.at(2)<<endl;
    cout<<"empty or not "<<v.empty()<<endl;
    cout<<"first element is "<<v.front()<<endl;
    cout<<"last element is "<<v.back()<<endl;

    v.clear(); // clear all the element

    cout<<v.size(); 
}