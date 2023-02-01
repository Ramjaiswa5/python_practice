#include<iostream>
using namespace std;

int insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
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
    insertionSort(array,n);
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
      
}