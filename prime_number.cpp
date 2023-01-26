#include<iostream>
using namespace std;
int main() {
    int n,x=0;
    cout<<"enter the value of n : ";
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            x++;
        }
        
    }
    if(n==1){
         cout<<n<<" is not a prime number "<<endl;
    }
    else if (x!=0)
    {
        cout<<n<<" is not a prime number "<<endl;
    }
    else{
         cout<<n<<" is a prime number "<<endl;
    }    
    
}