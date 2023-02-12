#include<iostream>
using namespace std;

int bubbleSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        for(int j = 0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int array[100];
    cout<<"enter the element of an array"<<endl;
    
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    cout<<"array after sorting "<<endl;
    bubbleSort(array,n);
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
      
}