#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l ;
    

    l.push_back(1);
    l.push_front(3);
    l.push_back(5);
    l.push_front(7);
    l.push_back(9);
    l.pop_back();
    
    for(int i:l){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"empty or not "<<l.empty()<<endl;
    cout<<"first element is "<<l.front()<<endl;
    cout<<"last element is "<<l.back()<<endl;

    cout<<"before erase "<<l.size()<<endl;
    l.erase(l.begin()); // delete first element at index 0
    cout<<"after erase "<<l.size()<<endl;

    list<int> l2(l); // copy list l element to l2

    for(int i:l2){
        cout<<i<<" ";
    }
    cout<<endl;
    list<int> l3(5,520); // contain list of size 5 with each elemet 520

     for(int i:l3){
        cout<<i<<" ";
    }
    cout<<endl; 
}