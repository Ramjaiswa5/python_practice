#include<iostream>
using namespace std;

bool checkPalindrome(int arr[],int n){
    int start=0,end=n-1;
    while(start<=end){
        if(arr[start] != arr[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

int main(){
    int size,temp;
    cout<<"enter the size of an array"<<endl;
    cin>>size;
    int array[size];

    cout<<"enter all the element of an array"<<endl;
    
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    cout<<endl;
    temp=checkPalindrome(array,size);

    if(temp){
        cout<<"array is palindrome";
    }
    else{
        cout<<"array is not palindrome";
    }
}