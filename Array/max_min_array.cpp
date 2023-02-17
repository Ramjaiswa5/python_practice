#include<iostream>
using namespace std;

int getmin(int arr[],int n){
    
    int min = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }
    return min;
}

int getmax(int arr[],int n){
    
    int max = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        
    }
    return max;
}

int main() {
    int num[100];
    int size;
    cout<<"enter the size of an array "<<endl;
    cin>>size;
    cout<<"enter all the element of an array "<<endl;
    for(int i = 0; i<size;i++){
        cin>>num[i];
    }
    cout<<"the maximum value of an array is : "<<getmax(num,size)<<endl;
    cout<<"the minimum value of an array is : "<<getmin(num,size)<<endl;
}
