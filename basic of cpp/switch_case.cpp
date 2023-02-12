#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"enter the value of num "<<endl;
    cin>>num;
    switch(num){
        case 1: cout<<"first"<<endl;
        break;
        case 2: cout<<"second"<<endl;
        break;
        case 3: cout<<"third"<<endl;
        break;
        default: cout<<"this is a default case"<<endl;
    }
}