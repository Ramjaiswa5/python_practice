#include<iostream>
using namespace std;

int firstIndex(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

int lastIndex(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the size of an array "<<endl;
    cin>>n;
    int array[100];

    cout<<"enter all the element of an array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int element;
    cout<<"enter the element to be search for "<<endl;
    cin>>element;
    

    int index1 = firstIndex(array,n,element);
    cout<<"the first index of "<<element<<" is "<<index1<<endl;
    int index2 = lastIndex(array,n,element);
    cout<<"the last index of "<<element<<" is "<<index2<<endl;

    return 0;
}