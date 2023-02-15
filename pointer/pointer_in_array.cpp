#include<iostream>
using namespace std;

int main() {
    int array[10] = {10,20,30,40,50,60,70,80,90,100};

    cout<<"address of first memory block is "<<array<<endl;
    // OR
    cout<<"address of first memory block is "<<&array<<endl;

    cout<<"value of first memory block is "<<*array<<endl;
    cout<<"value of second memory block is "<<*(array+1)<<endl; // +1 means jump one block or index
    cout<<"value of third memory block is "<<2[array]<<endl;
    cout<<"value of fourth memory block is "<<*(3+array)<<endl;
    cout<<"value of fifth memory block is "<<array[4]<<endl;

    cout<<"address of tenth memory block is "<<&array[9]<<endl;

    

    return 0;
}