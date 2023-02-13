#include<iostream>
using namespace std;
int sum(int n1, int n2){
    return (n1+n2);
}
int main(){
    int n1,n2;
    cout<<"enter first value "<<endl;
    cin>>n1;
    cout<<"enter second value "<<endl;
    cin>>n2;

    cout<<"the sum of "<<n1<<" and "<<n2<<" is "<<sum(n1,n2);
}