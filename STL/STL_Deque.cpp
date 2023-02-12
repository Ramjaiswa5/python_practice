#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d ;
    

    d.push_back(1);
    d.push_front(3);
    d.push_back(5);
    d.push_front(7);
    d.push_back(9);
    d.pop_back();
    
    for(int i=0; i<d.size();i++){
        cout<<d[i]<<" ";
    }

    cout<<endl;
    cout<<"element at 2nd index "<<d.at(2)<<endl;
    cout<<"empty or not "<<d.empty()<<endl;
    cout<<"first element is "<<d.front()<<endl;
    cout<<"last element is "<<d.back()<<endl;

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin()); // delete first element at index 0
    cout<<"after erase "<<d.size()<<endl;
     
    for(int i=0; i<d.size();i++){
        cout<<d[i]<<" ";
    }
     
}