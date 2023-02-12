#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter the first value : ";
    cin>>a;
    cout<<"enter the second value : ";
    cin>>b;
    char ch;
    cout<<"enter the operation which you want to perform : ";
    cin>>ch;
    
    switch(ch){
        case '+': cout<<"the sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        break;
        case '-': cout<<"the subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
        break;
        case '*': cout<<"the multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
        break;
        case '/': cout<<"the division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
        break;
        case '%':cout<<"the modules of "<<a<<" and "<<b<<" is "<<a%b<<endl;
        break;
        default: cout<<"enter the valid operation"<<endl;
    }
}