#include<iostream>
using namespace std;

int peak(int arr[],int size){
    int start=0,end=size-1;
    int mid = (start+end)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid=(start+end)/2;
    }
    return mid;
}

int main(){
    int array[100];
    int n,index;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    cout<<"enter all the element of an array"<<endl;
    for(int i = 0; i < n; i++){
        cin>>array[i];
    }
    index = peak(array,n);
    cout<<"the peak element of an array is "<<array[index]<<endl;
}