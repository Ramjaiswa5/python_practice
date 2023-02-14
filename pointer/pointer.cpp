#include<iostream>
using namespace std;
int main(){

    int num;
    char ch = 'R';
    cout<<"enter the number ";
    cin>>num;
    int *p = &num;
    cout<<"the number is "<<*p<<endl;
    char *c = &ch;
    cout<<"your character is "<<*c<<endl;
    cout<<"the address of "<<num<<" is "<<p<<endl;

}