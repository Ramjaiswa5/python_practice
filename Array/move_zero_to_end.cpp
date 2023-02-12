#include<iostream>
using namespace std;

int moveZero(int arr[], int n){
    int index = 0;

    for(int i = 0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[index]);
            index++;
        }
    }
}

int enterElement(int arr[], int n){

    cout<<"enter all the element of an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int print(int arr[], int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int array[n];

    enterElement(array,n);

    moveZero(array,n);

    print(array,n);
    
}