#include<iostream>
using namespace std;

void reverse(int arr[] , int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
}

int main() {
    int array1[6] = {2,6,7,3,-4,11};
    int array2[5] = {3,9,6,1,-5};

    reverse(array1,6);
    reverse(array2,5);

    print(array1,6);
    print(array2,5);

    return 0;
}