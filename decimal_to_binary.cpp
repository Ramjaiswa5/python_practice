#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    cout<<"enter the decimal value : ";
    cin>>n;
    int temp=n;
    int i = 0;
    int z = 0;
    while(temp!=0){
        int bit = temp&1;
        z=(bit*pow(10,i))+z;
        temp=temp>>1;
        i++;
    }
    cout<<"the binary vale of "<<n<<" is "<<z;
}