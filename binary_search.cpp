#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int array1[6]={2,3,6,9,11,15};
    int array2[7]={11,13,15,17,19,21,23};

    int index1 = binarySearch(array1,6,9);
    cout<<"the index of 9 is "<<index1<<endl;
    int index2 = binarySearch(array2,7,23);
    cout<<"the index of 23 is "<<index2<<endl;

    return 0;
}