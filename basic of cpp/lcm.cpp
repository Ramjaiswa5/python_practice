#include<iostream>
using namespace std;

int lcm(int a,int b) {
    int ans;
    int product = a*b;
    if(a==0){
        return 0;
    }
    else if(b==0){
        return 0;
    }
    else
    {
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }  
    }

    ans=product/a;
    return ans;
    
}
int main() {
    int a,b;
    cout<<"enter the two number"<<endl;
    cin>>a>>b;

    cout<<"the lcm of "<<a<<" and "<<b<<" is "<<lcm(a,b);
}