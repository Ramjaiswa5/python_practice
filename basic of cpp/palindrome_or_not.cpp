#include<iostream>
using namespace std;
int main() {
    int num,temp,reverse=0;
    cout<<"enter the number "<<endl;
    cin>>num;

    temp = num;
    
    while(temp!=0 && temp>=0){
        reverse=reverse*10 + temp%10;
        temp=temp/10;
    }

    if(reverse==num){
        cout<<num<<" is a palindrome number"<<endl;
    }
    else{
        cout<<num<<" is not a palindrome number"<<endl;
    }

}