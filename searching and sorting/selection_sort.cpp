#include<iostream>
using namespace std;

int selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int midIndex=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[midIndex])
            {
                midIndex=j;
            }
            
        }
        swap(arr[midIndex],arr[i]);
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
    selectionSort(array,n);
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
      
}