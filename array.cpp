#include<iostream>
using namespace std;
void printArray(int arr[], int size){
     cout<<"the element in the array are : ";
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int first[5]={0};
    printArray(first,5);

    int second[5]={1,2,3};
    printArray(second,5);

    // printint all the same element 
    int size;
    cout<<"enter the size of an array ";
    cin>>size;
    int third[size];
    int val ;
    cout<<"enter the value ";
    cin>> val;
    cout<<"the element in the array are : ";
    for (int i = 0; i < size; i++)
    {
        third[i] = val;
        cout<<third[i]<<" ";
    }

}