#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter number of term  : ";
    cin>>n;
    int a = 0, b = 1;
    cout<<a<<" "<<b<<" ";
    for (int i = 3; i <=n; i++)
    {
        int temp = a+b;
        cout<<temp<<" ";
        a=b;
        b=temp;
    }
    
}