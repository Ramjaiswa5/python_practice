#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    cout<<"enter the binary value : ";
    cin>>n;
    int temp=n;
    int i = 0;
    int z = 0;
    while(temp!=0){
        int digit = temp%10;
        if(digit==1){
            z=(z+pow(2,i));
        }
        temp=temp/10;
        i++;
    }
    cout<<"the decimal vale of "<<n<<" is "<<z;
}