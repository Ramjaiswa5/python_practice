#include<iostream>
using namespace std;

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n ; i++)
    {
        sum = sum + arr[i];
    }
    
    return sum;
}

int main() {
    
    int size;
    cout<<"enter the size of an array ";
    cin>>size;
    
    int array[size];
    cout<<"enter the element of an array"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    cout<<"the sum of an array is "<<sumArray(array,size);

} 